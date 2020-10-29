import os
from segtypes.segment import N64Segment
from pathlib import Path

import rareunzip

# Rare zip format:
# 4 byte uncompressed length followed by gzip level 9 stripped payload
class N64SegRzip(N64Segment):
    def __init__(self, segment, next_segment, options):
        super().__init__(segment, next_segment, options)
        self.files = self.parse_segment_files(segment)

    def get_default_name(self, addr):
        return f"code_{addr:X}"

    def parse_segment_files(self, segment):
        prefix = self.name if self.name.endswith("/") else f"{self.name}_"

        ret = []
        if "files" in segment:
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
        else:
            fl = {"start": self.rom_start, "end": self.rom_end, "name": seg_name, "subtype": "rzip"}
            ret.append(fl)
        return ret

    def split(self, rom_bytes, base_path):
        out_dir = self.create_split_dir(base_path, "rzip/%s" % self.name)
        print("Splitting rzip %s" % self.name)

        # write out bin until compression is matching
        with open(os.path.join(out_dir,  self.name + ".bin"), "wb") as f:
            f.write(rom_bytes[self.rom_start : self.rom_end])

        MAX_PADDING = 15

        for i, split_file in enumerate(self.files):
            filename = str(i).zfill(4)
            extension = split_file['subtype'] if len(split_file['subtype']) > 0 else "bin"
            compressed = rom_bytes[split_file["start"] : split_file["end"]]
            decompressed = None
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
            with open(os.path.join(out_dir,  filename + ".gz"), "wb") as f:
                f.write(compressed)
            if decompressed:
                with open(os.path.join(out_dir,  filename + "." + extension), "wb") as f:
                    f.write(decompressed)


    def get_ld_files(self):
        return [(f"rzip/{self.name}/", f"{self.name}.bin", ".data")]

    @staticmethod
    def get_default_name(addr):
        return "{:X}".format(addr)
