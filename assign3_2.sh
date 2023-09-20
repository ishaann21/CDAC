#!/bin/bash
read -p "Enter three numbers: " a b c
max=$a
if [ $b -gt $a ]
then
	if [ $c -gt $a ]
	then
		max=$c
	else
		max=$b
	fi
else
	if [ $c -gt $b ]
	then
		max=$c
	fi
fi
echo $max
