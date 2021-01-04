import os
import sys

# python3 progress chunk0/build/chunk0.map chunk0/

if len(sys.argv) < 4:
    print("usage: python3 %s .map src_dir section" % sys.argv[0])
    sys.exit(1)

mapfile = sys.argv[1]
basedir = sys.argv[2]
section = sys.argv[3]
if len(sys.argv) > 4:
    ending = sys.argv[4]
else:
    ending = None

files = {}
functions = {}

with open(mapfile) as f:
    in_code = False

    filename = None
    function = None
    total_size = None

    previous_offset = 0

    while True:
        line = f.readline()
        if not line:
            break

        if in_code:
            if (ending and line.startswith(ending)) or (ending is None and len(line) in [0, 1, 2]):
                in_code = False
                if function and total_size:
                    functions[function]["length"] = total_size - functions[function]["offset"]
                else:
                    print("No function / unable to determine total size")
                break
            # assuming "build/src/..."
            if line.startswith(" build/"):
                filename = line[7:].replace(".o(.text)", "").strip()
                continue
            if line.startswith(" .text "):
                continue
            # should we use regex?
            split_line = line.split()
            if len(split_line) == 2:
                offset, new_function = split_line
                offset = int(offset, 16)
            else:
                continue
            if offset < previous_offset:
                continue
            if function:
                # not 100% accurate due to nops but.. it'll do for now
                functions[function]["length"] = offset - functions[function]["offset"]
            functions[new_function] = {"offset": offset, "filename": filename, "language": "asm"}
            if filename not in files:
                files[filename] = []
            files[filename].append(new_function)
            function = new_function
            previous_offset = offset
        else:
            if line.startswith(section):
                in_code = True
                split_line = line.split()
                if len(split_line) > 2:
                    # should we take file offset from individual offsets?
                    total_size = int(split_line[1], 16) + int(split_line[2], 16)
                else:
                    # try nextline
                    line = f.readline()
                    split_line = line.split()
                    if len(split_line) < 2:
                        print("Could not determine total size, aborting")
                        break
                    total_size = int(split_line[0], 16) + int(split_line[1], 16)
                continue

for filename, funcs in files.items():
    c_path = os.path.join(basedir, filename + ".c")
    if os.path.isfile(c_path):
        global_asms = []
        with open (c_path, "r") as f:
            while True:
                line = f.readline()
                if not line:
                    break
                if line.startswith("#pragma GLOBAL_ASM"):
                    global_asms.append(line.strip())
        # hashmap this?
        for function in funcs:
            found = False
            for global_asm in global_asms:
                if function in global_asm:
                    found = True
                    break
            if not found:
                functions[function]["language"] = "c"

print("filename,function,offset,length,language")
for filename, funcs in files.items():
    basename = os.path.basename(filename)
    for func in funcs:
        language = functions[func]["language"]
        offset = functions[func]["offset"]
        length = functions[func]["length"]
        print (f"{basename},{func},{offset},{length},{language}")
