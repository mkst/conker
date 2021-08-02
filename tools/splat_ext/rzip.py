import os
import struct

from pathlib import Path

from segtypes.n64.segment import N64Segment
from util import options

import sys
if options.get_extensions_path() not in sys.path:
    sys.path.append('tools/splat_ext')
import rareunzip

# Rare zip format:
# 4 byte uncompressed length followed by deflate level 9 raw payload
class N64SegRzip(N64Segment):
    def __init__(self, rom_start, rom_end, type, name, vram_start, extract, given_subalign, given_is_overlay, given_dir, args, yaml):
        super().__init__(rom_start, rom_end, type, name, vram_start, extract, given_subalign, given_is_overlay, given_dir, args, yaml)
        self.has_subsegments = "subsegments" in yaml
        self.yaml = yaml
        self.xor = yaml.get("xor", None)

    def get_default_name(self, addr):
        return f"code_{addr:X}"

    def get_game_offsets(self, rom_bytes):
        prefix = self.name if self.name.endswith("/") else f"{self.name}_"
        ret = []
        offset = 1 # first item is data length
        previous = 0
        key = self.xor
        while True:
            start = struct.unpack(">I", rom_bytes[offset*4:offset*4+4])[0]
            offset += 1

            if start == 0:
                break
            else:
                start = key ^ start
                name = self.get_default_name(start) if self.name == self.get_default_name(self.rom_start) else f"{prefix}{start:08X}"
                if previous > 0:
                    ret.append({"start": previous, "end": start, "subtype": "compressed", "name": name}) # length is start - previous
                previous = start
        return ret


    def get_files_from_offsets(self, rom_bytes):
        if self.xor:
            return self.get_game_offsets(rom_bytes)

        prefix = self.name if self.name.endswith("/") else f"{self.name}_"
        base = self.rom_start
        offset = 0
        previous = 0
        ret = []
        while True:
            if base + 8 + offset * 8 > len(rom_bytes):
                break
            uncompressed, compressed = struct.unpack(">ii", rom_bytes[base+offset*8:base+offset*8+8])
            offset += 1
            #
            start = base + uncompressed
            type = compressed >> 24
            length = compressed % 0x10000000 # can we just AND with 0xffffff ?
            # if self.next_segment and start >= self.next_segment:
            if start >= self.rom_end:
                break
            if length > len(rom_bytes):
                break
            if start < previous:
                break
            if length == 0:
                # unsure why we see this but just skip
                continue
            # update latest offset
            previous = start
            #
            end = start + length
            #
            name = self.get_default_name(start) if self.name == self.get_default_name(self.rom_start) else f"{prefix}{start:08X}"
            # are there other flags?
            subtype = "compressed" if (type & 16) else "uncompressed"
            # require 8-byte alignment
            pad = 0 if end % 8 == 0 else (8 - end % 8)

            fl = {"start": start, "end": end, "pad": pad, "name": name, "subtype": subtype}
            ret.append(fl)
        return ret

    def parse_subsegments(self):
        prefix = self.name if self.name.endswith("/") else f"{self.name}_"

        ret = []
        for i, split_file in enumerate(self.yaml["subsegments"]):
            if type(split_file) is dict:
                start = split_file["start"]
                end = split_file["end"]
                name = None if "name" not in split_file else split_file["name"]
                subtype = split_file["type"]
            else:
                start = split_file[0]
                end = self.rom_end if i == len(self.yaml["subsegments"]) - 1 else self.yaml["subsegments"][i + 1][0]
                name = None if len(split_file) < 3 else split_file[2]
                subtype = split_file[1]

            if not name:
                name = self.get_default_name(start) if self.name == self.get_default_name(self.rom_start) else f"{prefix}{start:X}"

            fl = {"start": start, "end": end, "name": name, "subtype": subtype}
            ret.append(fl)

        return ret

    def out_path(self) -> Path:
        return self.out_dir() / f"{self.name}.bin"

    def out_dir(self) -> Path:
        return options.get_asset_path() / "rzip" / self.name

    def split(self, rom_bytes):
        if self.has_subsegments:
            self.subsegments = self.parse_subsegments()
        else:
            self.subsegments = self.get_files_from_offsets(rom_bytes)
            self.log(f"Found {len(self.subsegments)}file(s)")

        out_dir = self.out_dir()
        out_dir.mkdir(parents=True, exist_ok=True)
        # write out bin until compression is matching
        with open(self.out_path(), "wb") as f:
            f.write(rom_bytes[self.rom_start:self.rom_end])

        total_processed_bytes = 0
        if len(self.subsegments) > 0:
            # add header segment bytes if applicable
            header_length = self.subsegments[0]["start"] - self.rom_start
            total_processed_bytes += header_length

        for i, split_file in enumerate(self.subsegments):
            result = padding = None

            filename = str(i).zfill(4)
            extension = "bin"

            pad = split_file.get("pad", 0)
            data = rom_bytes[split_file["start"] : split_file["end"] + pad]

            if split_file["subtype"] in ("uncompressed", "mp3"):
                if pad == 0:
                    result = data
                else:
                    result = data[:-pad]
                    padding = data[-pad:]
                if split_file["subtype"] == "mp3":
                    extension = "mp3"
            else:
                try:
                    result, padding = rareunzip.runzip_with_leftovers(data)
                except Exception as e:
                    print("Failed to decompress file", split_file, e)
            # update total
            total_processed_bytes += len(data)
            # write out raw data
            out_filename = filename + (".gz" if split_file["subtype"] in ("gz", "compressed") else "")
            with open(os.path.join(out_dir,  out_filename), "wb") as f:
                f.write(data)
            # write out processed data
            if result:
                with open(os.path.join(out_dir,  filename + "." + extension), "wb") as f:
                    f.write(result)

        expected_length = self.rom_end - self.rom_start
        if total_processed_bytes != expected_length:
            print("Processed %i bytes but section is %i bytes!" % (total_processed_bytes, expected_length))

    def get_ld_files(self):
        return [(f"rzip/{self.name}/", f"{self.name}.bin", ".data", self.rom_start)]

    @staticmethod
    def get_default_name(addr):
        return "{:X}".format(addr)
