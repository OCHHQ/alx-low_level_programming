#!/bin.bash
wget -p ..  https://raw.github.com/OCHHQ/alx-low_level_programming/master/0x18-dynamic_libraries/libhackton.so
export LD_PREDLOAD="$PWD/../libhackton.so"
