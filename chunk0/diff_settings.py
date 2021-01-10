#!/usr/bin/env python3

VERSION = "us"

def apply(config, args):
    config['baseimg'] = f"game.{VERSION}.bin"
    config['myimg'] = 'build/chunk0.bin'
    config['mapfile'] = 'build/chunk0.map'
    config['source_directories'] = ['src', '../include']
