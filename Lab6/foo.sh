#!/bin/bash
#foo.sh in Part A of Lab 6 - Part 1
#

x=0 #initialization x = 0
i=1
echo please input a number
read num 
while [ $i -le $num ] #it was -le 3 before which meant while (i <= 3), now it is while (i <= $1 which the dollar sign 1 is equal to input)
do 
s=`expr $i \* $i` #s = i * i
x=`expr $s + $x`
i=`expr $i + 1` # i = i + 1
done

echo x=$x
