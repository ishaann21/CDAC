#!/bin/bash
read -p "Enter a number: " n
#echo n
i=1
while [ $i -le $n ]
do
	echo ""
	j=$(($n-$i))
	while [ $j -ge 0 ]
	do 
		echo -n " "
		j=$(($j-1))
	done
	j=1
	while [ $j -le $i ]
	do
		echo -n "$i "
		j=$(($j+1))
	done
	i=$(($i+1))
done
