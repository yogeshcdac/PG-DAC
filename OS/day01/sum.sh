#!/bin/bash

a=5
b=10

#Several ways of assigning data

c=a+b

echo "sum=$c"

c=$a+$b

echo "sum=$c"

let c=$a+$b

echo "sum $c"

((d=a+b))

echo "sum d=$d"

e=`expr $a + $b`

echo "sum e=$e"
