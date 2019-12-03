#!/bin/sh
#

pre_lines=$(gcc -E preprocess/pre_lib.c)
# newlines=""
# for i in $pre_lines;do
#     if ![[${i} == "#*"]];then 
#         $newlines=$newlines + $i +"\n"
#         echo $i
#     fi
# done
echo $pre_lines >> gen.go
exit 0
