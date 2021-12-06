#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
/* Name: Daniel Lee
 * Program Name: getMostFrequent.c
 * Description: gets the most frequent letter in the input. 
 */
int main(int argc, char** argv) 
{	/* initial variables and input file as well. input.txt is the sample text 
	*/
	char words[1000]; 
	char filein[] = "test.txt"; 
	int count[255] = {0};
  	/* the file will be opened down here. */
	int i = 0, max, index;
	FILE *file;
	file = fopen(filein, "r");
	char character;
	while (character != EOF) 
	{ 
		character = (char) fgetc(file); 
		words[i] = character; 
		if (character >= 65 && character <= 92)
		{
			count[character + 32]++;
		}
		else
			if (character >= 97 && character <= 122) 
			{
				count[character]++;
			}
		i++;
	}

	max = count[0];
	index = 0;
	for (i = 0; i < strlen(words) - 1; i++) 
	{
		if (count[words[i]] > max) 
		{
			max = count[words[i]];
			index = i;
		}
	} 
		printf("The maximum character is : %c. It appears %d times.\n", words[index], count[words[index]]);
return (EXIT_SUCCESS);
}


