#1/bin/bash

echo "enter no. - "

read a

if [ $a == 10 ] || [ $a == 2 ]
then
# if [ a == 10 ] wont execute without $ as value is not assigned
	echo "if executes"
elif [ $a == 20 ]
then
	echo "elif executes"
else
	echo "else executes"
	echo "---------"
#the ------- line also execute
fi

#infinite loop
while true
do
	echo "hi"
done
