#!/bin/bash
#返回当前目录路径
dir_path=`dirname "$0"`
echo $dir_path
# echo ${1:-$dir_path}
#返回第一个参数，如果存在且非空，则返回值。否则返回$dir_path
echo ${1:-$dir_path}
echo `pwd`
