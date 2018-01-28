#/bin/sh

RM="rm -rvf"
PWD=$(pwd)

$RM $PWD/$(find . -name CMakeFiles)
$RM $PWD/$(find . -name cmake_install.cmake)
$RM $PWD/$(find . -name Makefile)

$RM $PWD/CMakeCache.txt
$RM $PWD/CMakeFiles
$RM $PWD/cmake_install.cmake
$RM $PWD/Makefile
