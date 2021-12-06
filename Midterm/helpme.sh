#!/bin/bash
#Daniel Lee, dlee143@student.gsu.edu
#helpme.sh

echo "Please type a command you would like to know more about: " 
#prompts user 

read input
#user input in 

if grep -q $input mandatabase.txt 
then

#if the input is not in the database then it will print the statement below
grep $input mandatabase.txt; 
else

echo "Sorry, I can not help you."
fi
