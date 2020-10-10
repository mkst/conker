#!/usr/bin/env python3

def apply(config, args):
    config['baseimg'] = 'baserom.us.z64'
    config['myimg'] = 'build/conker.us.z64'
    config['mapfile'] = 'build/conker.us.map'
    config['source_directories'] = ['.']
