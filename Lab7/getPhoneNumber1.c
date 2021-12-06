#include <stdio.h>
/* Name: Daniel Lee
 * Code Name: getPhoneNumber.c
 * Description: input a phone number and returns the phone number in 
 * proper form. */
int main(void)
{
	/* initializing the variables */
	int first, second, third;
	/* the input section */
	/* user will have to input the phone number in 3 sections hence; 
 	(713)373-7667 will be inputted 713[enter], 373[enter], 7667[enter] */
	printf("Please enter your phone number in format: 000-000-0000\n");
	scanf("%d%d%d", &first, &second, &third);
	
	printf("Your phone number is (%d)-%d-%d\n", first, second, third);
	
	return 0;
}
