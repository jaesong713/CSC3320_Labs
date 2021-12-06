#!/bin/sh
#dlee143@student.gsu.edu, Daniel Lee
#phonebook.sh

echo -n "Please enter the name of the person: " 
read name
echo -n "Please enter $name's address: "
read address

echo -n "Please enter $name's phone number in format XXX-XXX-XXXX: "
read digits

echo "Name: $name | Address: $address | Phone #: $digits" >>phonebook.txt

