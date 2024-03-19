#!/bin/bash
myarray=(1 2 hello "hello all")

echo "${myarray[0]}"
echo "${myarray[*]}"

echo "length : ${#myarray[*]}"

echo "${myarray[*]:1}"
echo "${myarray[*]:1:2}"


myarray+=(5 4 arvind)

echo "${myarray[*]}"


