#!/bin/bash
read -p "Enter three numbers: " a b c
echo "$a $b $c"
max=$a
if [ $a -gt $b ] && [ $a -gt $c ]
then
	max=$a
elif [ $b -gt $c ] && [ $b -gt $a ]
then
	max=$b
elif [ $c -gt $a ] && [ $c -gt $b ]
then
	max=$c
fi
echo $max
