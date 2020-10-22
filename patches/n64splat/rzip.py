import os
from segtypes.segment import N64Segment
from pathlib import Path

import rareunzip

# Rare zip format:
# 4 byte uncompressed length followed by gzip level 9 stripped payload
class N64SegRzip(N64Segment):
    def __init__(self, rom_start, rom_end, segtype, name, ram_addr, files, options):
        super().__init__(rom_start, rom_end, segtype, name, ram_addr, files, options)

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

    def get_ld_section(self):
        section_name = ".data_{}".format(self.name)

        lines = []
        lines.append("    /* 0x00000000 {:X}-{:X} [{:X}] */".format(self.rom_start, self.rom_end, self.rom_end - self.rom_start))
        lines.append("    {} 0x{:X} : AT(0x{:X}) ".format(section_name, self.rom_start, self.rom_start) + "{")
        lines.append("        build/rzip/{}/{}.o(.data);".format(self.name, self.name))
        lines.append("    }")
        lines.append("")
        lines.append("")
        return "\n".join(lines)

    @staticmethod
    def create_makefile_target():
        return ""
