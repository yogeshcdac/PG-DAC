#!/bin/bash 

time=$(date +%H)

 echo "$time"
#Tester 2: echo "date +%H"


if [ $time -le 4 ] && [ $time -ge 20 ]
then
	echo "Good Night"
elif [ $time -le 10 ] && [ $time -ge 4 ]
then
	echo "Good Morning"
else
	echo "Good afternoon"
fi
