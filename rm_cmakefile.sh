#/bin/sh

RM="rm -rvf"
PWD=$(pwd)
PRJ_SINGLY="singly"
PRJ_CIRCUL="circular"
PRJ_STACK="stack"

$RM $PWD/$(find . -name CMakeFiles)
$RM $PWD/$(find . -name cmake_install.cmake)
$RM $PWD/$(find . -name Makefile)

$RM $PWD/CMakeCache.txt
$RM $PWD/CMakeFiles
$RM $PWD/cmake_install.cmake
$RM $PWD/Makefile

$RM $PWD/linked_list/$PRJ_SINGLY/bin/
$RM $PWD/linked_list/$PRJ_CIRCUL/bin/
$RM $PWD/$PRJ_STACK/bin
