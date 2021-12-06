#include <stdio.h>
#include<string.h>
/* Name: Daniel Lee
 * Program Name: number3.c
 * Description: This program will check and see ifhte user input is 
 * a palindrome or not. */
//The method or function that is accessed to see if the input is the 
//palindrome 
int check(char array[])
{
        int size = strlen(array);      
        int i = 0,j = size - 1;

        for(i= 0; i < j;)
	{
	/* The for loop will compare the first and last letters 
  	 * to one another each examination and see if they match.
  	 * if there is an instance that there is not match then it will
   	 * not continue */
            if(array[i]==' '){
                i++;
                continue;
            }

            if(array[j] == ' '){
                j--;
                continue;
            }
		/* Hence, this is the loop that will end the loop if there is no match. */
            if(array[i] != array[j])
	    {
                 return 0;
            }
		i++;
		j--;

        }
        	return 1;
}
int main() 
{
	/*This is the main function that does not yield the void in the parantheses 
  	 *because of the will to access the check function. */
        char array[100];

        printf("Enter string: ");
        scanf(" %[^\n]s", array);

        if(check(array) == 1)
	{
                printf("Yes it is a palindrome\n");
	}
        else
	{
                printf("Not a palindrome\n");
	}
        return 0;
}
