#!/bin/bash
wget -P /tmp https://github.com/doncarbon/alx-low_level_programming/raw/master/0x18-dynamic_libraries/randomwin.so
export LD_PRELOAD=/tmp/randomwin.so
