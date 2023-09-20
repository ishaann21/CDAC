#!/bin/bash
n=1
while [ $n -eq 1 ]
do
	read -p "Enter first opearand, operator and second operand with spaces in between them: " a o b
	echo -n "$a$o$b="
	case "$o" in
		"+") echo $(($a+$b))
		;;
		"-") echo $(($a-$b))
		;;
		"*") echo $(($a*$b))
		;;
		"/") echo $(($a/$b))
		;;
	esac 
	read -p "Enter 1 to perform another calculation: " n
done
