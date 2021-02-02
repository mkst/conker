import struct
import sys
import argparse

game_data_start = {
    'us':    0x002275E0,
    'eu':    0x00228130,
    'debug': 0x002190F0,
    'ects':  0x001F65C0,
}

game_data_vram = {
    'us':    0x80082B20,
    'eu':    0x80082EB0,
    'debug': 0x8005B0F0,
    'ects':  0x8018C0E0,
}

debugger_start = {
    'us':    0x00255880,
    'eu':    0x00256450,
    'debug': 0x00248510,
    'ects':  0x00224500
}

def pretty_print(data, offset, is_variable=True, is_string=False):
    data_length = len(data)
    if is_string:
        print(f'char[{data_length}] D_{offset} = {data}')
        return

    if data_length % 4 != 0:
        print('Expected length mod 4', data)
        return
    else:
        floats = struct.unpack('>' + (data_length // 4) * 'f', data)
        ints = struct.unpack('>' + (data_length // 4) * 'i', data)
        shorts = struct.unpack('>' + (data_length // 2) * 'h', data)
    for i, float in enumerate(floats):
        if is_variable:
            prefix = f'D_{offset+i*4:08X}'
        else:
            prefix = f'0x{offset+i*4:08X}'
        dbl = ""
        if i % 2:
            dbl = f"// {struct.unpack('>d', data[i*4-4:i*4+4])[0]}"
        print(f'f32 {prefix} = {str(float)+"f;":<24} // {ints[i]:<14} // {data[i*4:i*4+4]} // {[int(x) for x in data[i*4:i*4+4]]} {dbl}')
        # print(f'f32 {prefix} = {shorts[2*i]}, {shorts[2*i+1]}')

def get_bytes(data, start, length):
    if start > len(data):
        print('Start (%s) is beyond length of data' % hex(start))
        return None
    return data[start:start + length]

def variable_to_offset(variable, version):
    if not variable.startswith('D_'):
        print('Unsupport variable name: %s' % variable)
        return 0
    offset = int(variable[2:], 16)
    if offset < 0x80000000:
        print('debugger data')
        return debugger_start[version] + offset - 0x16000000
    elif offset < game_data_vram[version]:
        print('init data')
        return offset - 0x80000000
    else:
        print('game data')
        return game_data_start[version] + offset - game_data_vram[version]

def main(infile, user_input, length=64, version='us', is_string=False):
    data = infile.read()
    is_variable = user_input.startswith('D_')
    if is_variable:
        start = variable_to_offset(user_input, version)
    else:
        start = int(user_input, 16)
    res = get_bytes(data, start, length)
    if res:
        offset = int(user_input[2:]  if is_variable else user_input,16)
        print("start", hex(start))
        pretty_print(res, offset, is_variable, is_string)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Grab data from file based on offset or variable name',
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('offset', type=str,
                        help='data offset e.g. 0xbeef or D_80001400')
    parser.add_argument('--version', type=str, default='us',
                        help='offsets length')
    parser.add_argument('--string', action='store_true',
                        help='treat data as a c-string rather than floats/ints')
    parser.add_argument('--length', type=int, default=64,
                        help='how many bytes to grab')
    args = parser.parse_args()

    with open (f'conker.{args.version}.bin', 'rb') as f:
        main(f, args.offset, args.length, args.version, args.string)
