#!/bin/bash
read -p "Enter a number: " n
for((i=1;i<=n;i++))
do
	for((j=1;j<=i;j++))
	do
		echo -n " |"
	done
	echo -n "_"
	echo ""
done
