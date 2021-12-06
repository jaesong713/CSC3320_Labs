#!/bin/bash

echo "Welcome to the computer science society."
#Daniel Lee, dlee143@student.gsu.edu
echo "The current time and date is: " `date`

echo "The number of directories are: "
ls -A | wc -l 

echo "The Path is: "
echo $PATH

echo "The users are: "
echo $USER

echo "Disk Usage is: "
du

echo 'Please, could you loan me $25.00?' 
echo "if x = 2, x * x = 4, x / 2 = 1"

echo "The .sh files are: "
ls *.sh
 
echo "Files that start with the letter C: "
ls | grep ^c

echo "Good bye! The current time and date now is: " `date`
