#!/bin/bash
wget -P /tmp https://github.com/sidneyriffic/holbertonschool-low_level_progamming/raw/master/0x17-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
