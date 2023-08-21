#!/bin/bash
wget -P /tmp https://github.com/YousifAbozid/alx-low_level_programming/raw/source/0x18-dynamic_libraries/gm_crack.so
export LD_PRELOAD=/tmp/gm_crack.so
