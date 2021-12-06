#!/bin/sh
#Daniel Lee, dlee143@student.gsu.edu
 
echo -n "Who would you like to remove? "
read name

sed [$name*]phonebook.txt
