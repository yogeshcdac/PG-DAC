#!/bin/bash

echo "enter no. -"

read a

if [ $a == 10 ] || [ $a == 2 ]
then 
	echo "if part"
elif [ $a == 15 ]
then 
echo "elif part"

else 
	echo "else part"

fi
