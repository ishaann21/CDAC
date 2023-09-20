#!/bin/bash
read -p "Enter a number: " num
#echo $num
#temp=$num
sum=0
#echo $temp
while [ $num -gt 0 ]
do
temp=$(($num%10))
#echo $temp
sum=$(($sum+$temp))
#echo $sum
num=$(($num/10))
#echo $temp
done
echo $sum

