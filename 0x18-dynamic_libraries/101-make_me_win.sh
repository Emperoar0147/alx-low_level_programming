#!/bin/bash
wget -p .. https://raw.githubuser.com/Emperoar0147/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$PWD/../libtest.so"
