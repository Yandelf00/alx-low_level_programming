#!/bin/bash
wget https://github.com/Yandelf00/alx-low_level_programming/blob/master/0x18-dynamic_libraries/ij.so -P ../
export LD_PRELOAD=../ij.so