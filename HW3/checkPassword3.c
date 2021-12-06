#include <stdio.h>
#include <string.h>
/** Programmer: Daniel Lee
 ** Program Name: checkPassword3.c
 ** Description: This program will verify that the password that was entered 
 ** qualifies with the conditions that it has a lower case, capital letter(s),
 ** number(s) and consecutive characters.
 **/
int main()
{
 // The initial variables that will be used for later.		
	char password[25]; 
	int points = 10;
	int length = 0, lowercase, uppercase, numbers, repeated, i, j;
	printf("Enter the password: ");
	scanf("%s", &password); 
   // ^^ the input for the user for the initial password to examine.
 	length = strlen(password);
	// The length for the string input (the password)
	for(i = 0; i < length; i++)
	{ //first examining if there are LOWER CASE letters 
	 if(password[i] >= 'a' && password[i] <= 'z')
	 {
		lowercase += 1;
	 }
	} /** The lower if statement signifies if there are NO LOWER case letters that 
	   ** there is a deduction in 20 points */
  	if(lowercase <= 0)
	{ 
		points -= 20;
	}
	for(i = 0; i < length; i++)
	{ //examination for any uppercase letters.
	  if(password[i] >= 'A' && password[i] <= 'Z')
	  {
	 	uppercase += 1;
	  }
	}
          //if there is a lack of uppercase letters than there is a deduction of 20 points.
	if(uppercase < 2) 
	{
	points -= 20; 
	} //This for statement below will examine if the password input has numbers. 
	for(i = 0; i < length; i++)
	{
	 if(password[i] >= '0' && password[i] <= '9')
	 {
		numbers += 1;
	 }
	} /* IF there are no numbers within the input password then there will be a deduction in 
	   * 20 points. */
	if(numbers <= 0)
	{
	 	points -= 20; 
	}
	for(i = 0; i < length; i++)
	{ /* the for statement to examine if there are any repeated characters within the input. */
	   for(j = i + 1; j < length; j++)
	   {
		if(password[j] - password[i] == 1)
		{
			repeated += 1;
		}
	   }
	} /* IF there is not 2 or more of a certain character then there will be a deduction of 
	   * 20 points */
	if(repeated >= 2) 
	{
		points -= 20; 
	}

	if(points > 30)
	{
		printf("Points: %d\n", points);
		printf("The password is unsafe! Please reset it. \n");
	}
	else
	{
		printf("Points: %d\n",points);
		printf("The password is ok. \n");
	}
  
		return 0;
}
