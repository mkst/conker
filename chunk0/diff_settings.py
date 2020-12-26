#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = 'game.bin'
    config['myimg'] = 'build/chunk0.bin'
    config['mapfile'] = 'build/chunk0.map'
    config['source_directories'] = ['src', '../include']
