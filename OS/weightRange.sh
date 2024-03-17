#!/bin/bash

echo "Enter your weight"
read wt

if [ $wt -ge 50 ] && [ $wt -le 250 ];
then
echo "Welcome to the club"
else 
echo "Please come back when you weight ranges between 50 and 250"
fi
