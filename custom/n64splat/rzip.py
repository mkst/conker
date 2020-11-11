import os
import struct


from segtypes.segment import N64Segment
from pathlib import Path

# FIXME: this is horrible
import sys
if not 'custom/n64splat/' in sys.path:
    sys.path.append('custom/n64splat/')
import rareunzip

# Rare zip format:
# 4 byte uncompressed length followed by gzip level 9 stripped payload
class N64SegRzip(N64Segment):
    def __init__(self, segment, next_segment, options):
        super().__init__(segment, next_segment, options)
        self.has_files = "files" in segment
        self.segment = segment
        self.next_segment = next_segment["start"] if "start" in next_segment else 0
    def get_default_name(self, addr):
        return f"code_{addr:X}"

    def get_files_from_offsets(self, rom_bytes):
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
            length = compressed % 0x10000000
            if self.next_segment and start >= self.next_segment:
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
            # are there other types?
            subtype = "compressed" if type == 16 else "uncompressed"
            # require 8-byte alignment
            pad = 0 if end % 8 == 0 else (8 - end % 8)
            if pad:
                # print("Padding %s with %i bytes" % (name, pad))
                end += pad
            fl = {"start": start, "end": end, "pad": pad, "name": name, "subtype": subtype}
            ret.append(fl)
        return ret

    def parse_segment_files(self, segment):
        prefix = self.name if self.name.endswith("/") else f"{self.name}_"

        ret = []
        for i, split_file in enumerate(segment["files"]):
            if type(split_file) is dict:
                start = split_file["start"]
                end = split_file["end"]
                name = None if "name" not in split_file else split_file["name"]
                subtype = split_file["type"]
            else:
                start = split_file[0]
                end = self.rom_end if i == len(segment["files"]) - 1 else segment["files"][i + 1][0]
                name = None if len(split_file) < 3 else split_file[2]
                subtype = split_file[1]

            if not name:
                name = self.get_default_name(start) if self.name == self.get_default_name(self.rom_start) else f"{prefix}{start:X}"

            fl = {"start": start, "end": end, "name": name, "subtype": subtype}
            ret.append(fl)

        return ret

    def split(self, rom_bytes, base_path):
        if self.has_files:
            self.files = self.parse_segment_files(self.segment)
        else:
            self.files = self.get_files_from_offsets(rom_bytes)
            print(">> Found %i file(s)" % len(self.files))

        out_dir = self.create_split_dir(base_path, "rzip/%s" % self.name)
        # write out bin until compression is matching
        with open(os.path.join(out_dir, self.name + ".bin"), "wb") as f:
            f.write(rom_bytes[self.rom_start:self.rom_end])

        MAX_PADDING = 15

        for i, split_file in enumerate(self.files):
            filename = str(i).zfill(4)
            extension = "bin"
            compressed = rom_bytes[split_file["start"] : split_file["end"]]
            decompressed = None
            if split_file["subtype"] in ("uncompressed", "mp3"):
                decompressed = compressed
                if split_file["subtype"] == "mp3":
                    extension = "mp3"
                # TODO: add padding
            else:
                try:
                    decompressed = rareunzip.runzip(compressed)
                except:
                    padding = 0
                    while True:
                        padding += 1
                        try:
                            decompressed = rareunzip.runzip(compressed[:-padding])
                            compressed = compressed[:-padding]
                            break
                        except:
                            if padding == MAX_PADDING:
                                print("Error decompressing %s" % filename)
                                break
                    if 0 < padding < MAX_PADDING:
                        with open(os.path.join(out_dir,  filename + ".pad"), "wb") as f:
                            # max seen so far: 7 bytes of padding
                            if padding > 7:
                                print("Padding %i for %s" % (padding, str(hex(split_file["start"]))))
                            f.write(compressed[-padding:])

            out_filename = filename + (".gz" if split_file["subtype"] in ("gz", "compressed") else "")
            with open(os.path.join(out_dir,  out_filename), "wb") as f:
                f.write(compressed)
            if decompressed:
                with open(os.path.join(out_dir,  filename + "." + extension), "wb") as f:
                    f.write(decompressed)


    def get_ld_files(self):
        return [(f"rzip/{self.name}/", f"{self.name}.bin", ".data")]

    @staticmethod
    def get_default_name(addr):
        return "{:X}".format(addr)
