#!/usr/bin/env python3

VERSION="us"

def apply(config, args):
    config["baseimg"] = f"baserom.{VERSION}.z64"
    config["myimg"] = f"build/conker.{VERSION}.z64"
    config["mapfile"] = f"build/conker.{VERSION}.map"
    config["source_directories"] = ["src", "src_eu", "src_debug", "include"]
