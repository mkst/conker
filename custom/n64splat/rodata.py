import os
import struct
from segtypes.segment import N64Segment
from pathlib import Path

class N64SegRodata(N64Segment):
    def __init__(self, segment, next_segment, options):
        super().__init__(segment, next_segment, options)
        self.files = self.parse_segment_files(segment)

    def parse_segment_files(self, segment):
        prefix = self.name if self.name.endswith("/") else f"{self.name}_"
        ret = []
        if "files" in segment:
            for i, split_file in enumerate(segment["files"]):
                if type(split_file) is dict:
                    start = split_file["start"]
                    end = self.rom_end if i == len(segment["files"]) - 1 else segment["files"][i + 1]["start"]
                    name = None if "name" not in split_file else split_file["name"]
                    glabel = None if "glabel" not in split_file else split_file["glabel"]
                    types = split_file["types"]
                else:
                    start = split_file[0]
                    end = self.rom_end if i == len(segment["files"]) - 1 else segment["files"][i + 1][0]
                    name = None if len(split_file) < 3 else split_file[2]
                    glabel = None if len(split_file) < 4 else split_file[3]
                    types = split_file[1]
                if not name:
                    name = self.get_default_name(start) if self.name == self.get_default_name(self.rom_start) else f"{prefix}{start:X}"
                fl = {"start": start, "end": end, "name": name, "types": types, "glabel": glabel}
                ret.append(fl)
        return ret

    def split(self, rom_bytes, base_path):
        out_dir = self.create_split_dir(base_path, "rodata")
        if len(self.files) == 0:
            # just iterate through
            pass
        for split_file in self.files:

            start = split_file['start']
            ret = self.get_header()
            for i, datatype in enumerate(split_file["types"]):
                glabel = split_file["glabel"][i] if split_file["glabel"] else ("D_" + self.get_default_name(0x80000000 + start+i*4))
                ret.append(f"glabel {glabel}")
                if datatype == "f":
                    value = struct.unpack(">f", rom_bytes[start+i*4:start+4+i*4])[0]
                    ret.append(f".float {value}")
                else:
                    print("UNSUPPORTED TYPE!")
            ret.append("")
            with open(os.path.join(out_dir, split_file["name"] + ".rodata"), "w") as f:
                f.write("\n".join(ret))

    def get_ld_files(self):
        ret = []
        for split_file in self.files:
            name = split_file["name"]
            ret.append((f"rodata", f"{name}.o", ".data"))
        return ret

    def get_header(self):
        ret = []
        ret.append(".include \"macro.inc\"")
        ret.append("")
        ret.append(".section .data")
        ret.append("")
        return ret

    @staticmethod
    def get_default_name(addr):
        return "{:X}".format(addr)
