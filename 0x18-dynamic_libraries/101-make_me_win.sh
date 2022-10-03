#!/bin/bash
wget -P /tmp/ https://raw.github.com/NaheemahBello/alx-low_level_programming/master/0x17-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
