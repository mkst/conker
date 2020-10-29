import os
from segtypes.segment import N64Segment
from pathlib import Path

class N64SegMp3(N64Segment):
    def split(self, rom_bytes, base_path):
        if self.type in self.options["modes"] or "all" in self.options["modes"]:
            out_dir = self.create_split_dir(base_path, "mp3")

            bin_path = os.path.join(out_dir,  self.name + ".mp3")
            Path(bin_path).parent.mkdir(parents=True, exist_ok=True)
            with open(bin_path, "wb") as f:
                f.write(rom_bytes[self.rom_start : self.rom_end])
            self.log(f"Wrote {self.name} to {bin_path}")


    def get_ld_files(self):
        return [("mp3", f"{self.name}.mp3", ".data")]


    @staticmethod
    def get_default_name(addr):
        return "{:X}".format(addr)
