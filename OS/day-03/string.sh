#!/bin/bash

echo "enter string1"
read str1

echo "enter string2"
read str2

stringconcat(){
str1=$1 
str2=$2
#str3

str3=$1$2
echo "$str3"



}

stringconcat $str1 $str2


strlength(){
echo  "${#1}"

}

strlength $str1

strcmp(){

if [	str1==str2 ]; then 
	echo "strings are equal"
else

}

