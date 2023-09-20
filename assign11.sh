#!/bin/bash

#read path
#read -p "Enter a File Path to check whether is exists or not: " path
if [ -f "$1" ];
then
	echo "$1 exists"
else
	echo "404 Not found"
fi
echo "$2 is being printed!!"
