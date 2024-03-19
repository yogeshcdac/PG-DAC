#!/bin/bash


echo "number of arguments : $#"
echo "script name : $0"
echo  "second  argument : $2"
echo  "argument passed : $*"


if [ "$#" -ge 1 ]; then
 
	echo "argument exceeded"
fi

echo "Task 10:"
if [ "$#" -eq 0 ]; then
	echo "usage : $0<file1> [<file2>...]"
	exit 1


fi


for file in "$*"; do
	if [ ! -e "$file" ]; then
		echo "$file : no such file or directory."
	elif [ -f "$file" ]; then
		echo "$file : regular file"

	elif [ -d "$file" ]; then
		echo "$file :directory file"


	elif [ -b "$file" ]; then
		echo "$file : block file"

fi
done
