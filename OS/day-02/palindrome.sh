#!/bin/bash



palindrome(){
	if [ "$(rev <<< "$1")" == "$1" ]; then
	echo "Palindrome"
	else
	echo "Not a palindrome"
	fi
}

reverse_string
