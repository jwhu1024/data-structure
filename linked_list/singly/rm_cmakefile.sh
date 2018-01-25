#/bin/sh

RM="rm -rvf"

if [ -z "$1" ]; then
	echo "Please input your root path then try again!"
	exit 1
fi 

$RM $1/bin/*
$RM $1/CMakeCache.txt
$RM $1/CMakeFiles
$RM $1/cmake_install.cmake
$RM $1/Makefile
