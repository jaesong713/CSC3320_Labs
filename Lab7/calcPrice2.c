#include <stdio.h>
/***********************
 * Name: Daniel Lee    *
 * Program: calcPrice.c*
 ***********************/
 
int main(void)
{	/* initializing the variables */
	int amount, itemNumber, month, day, year; 
	float price, totalAmount;
	char i[] = "Item";
	char uP[] = "Unit Price";
	char q[] = "QTY";
	char pD[] = "Purchase Date";
	char tA[] = "Total Amount";
	/* input for the information */

	printf("Please enter the item number: \n");
	scanf("%d", &itemNumber);
	printf("Please enter the price of the item: \n");
	scanf("%f", &price);
	printf("How many did you purchase? \n");
	scanf("%d", &amount);
	/* input for the date must be entered in this order month [enter], day [	enter], year [enter] */
	printf("Please enter the date of purchase in following format [3 times] (mm), (dd), (yy)"); 
	scanf("%d %d %d", &month, &day, &year);
	/* calculation code for the total amount */
	totalAmount = price * amount;
	/* I still need to work on aligning the output */
	printf("%-7s\t%10s\t%-6s\t%-15s\t%14s\n", i, uP, q, pD, tA);
	printf("%-7d\t$%9.2f\t%6d\t%-d/%-d/%-d\t$%13.2f\n", itemNumber, price, amount, month, day, year, totalAmount);
	
	return 0;
}
