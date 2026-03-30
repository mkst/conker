#!/usr/bin/env python3

VERSION = 'us'

def apply(config, args):
    config['baseimg'] = f'conker.{VERSION}.bin'
    config['myimg'] = f'build/conker.{VERSION}.bin'
    config['mapfile'] = f'build/conker.{VERSION}.map'
    config['source_directories'] = ['src', 'include']
    config['objdump_executable'] = 'mips64-linux-gnu-objdump'
    config['build_command'] = ['make', 'CROSS=mips64-linux-gnu-']
