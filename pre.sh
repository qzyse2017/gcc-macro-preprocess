#!/bin/sh
#
pre_lines=$(gcc -E preprocess/pre_lib.c)
echo $pre_lines >> gen.go
