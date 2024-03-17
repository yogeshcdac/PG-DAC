#!/bin/bash

#Finding if Weekday or Weekend
day=$(date +%u)
if [ $day -ge 1 ] && [ $day  -le 5 ];
then
	echo "Today is a working day"
else 
	echo "It's the weekend"
fi


