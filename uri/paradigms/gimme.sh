#!/bin/bash
mkdir $1
touch $1/input
touch $1/output
cp template.cpp $1/$1.cpp
echo "file=$1" > $1/Makefile
cat Makefile >> $1/Makefile
