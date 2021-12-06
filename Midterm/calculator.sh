#/bin/bash
#Daniel Lee, dlee143@student.gsu.edu
#Calculator.sh

#Like a java calculation the base case would start off at 0.

answer=0 
echo "Please enter your Java equation" #prompting the user for input
input=" "
#same thing applies for the input above 


read var1 expression var2 #inputs for calculation

#the if statement verifyiing that the inputs are valid
if [[ ("$var1" =~ -?[0-9]*) && ("$var2" =~ -?[0-9]*)]]
then 
echo $(($var1$expression$var2)) #the expression to carry out the calculation

elif [[ "$var1" =~ -?[0-9]*\.[0-9] ]]
then 
echo 'scale = 1;$answer = $var1 $epxression $var2' | bc
else 
echo please enter a valid expression 
#prompts the user and verifies if the users input is the right type
fi
