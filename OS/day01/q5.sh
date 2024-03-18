#!/bin/bash

read -p "Enter your weight" w

if [ $w -ge 50 ] && [ $w -le 250 ]; then
	echo "OK"
else
	echo "Not OK"
fi
echo""

