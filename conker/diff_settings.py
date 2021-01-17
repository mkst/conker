#!/usr/bin/env python3

VERSION = 'us'

def apply(config, args):
    config['baseimg'] = f'conker.{VERSION}.bin'
    config['myimg'] = f'build/conker.{VERSION}.bin'
    config['mapfile'] = f'build/conker.{VERSION}.map'
    config['source_directories'] = ['src', 'include']
