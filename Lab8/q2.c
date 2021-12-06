#include <stdio.h>

int main()
{
	int letters;
	int words;
	char character;

	printf("Enter a sentence: ");

	while((character = getchar()) != \n)
	{
		if(character != ' ')
		{
			if(!space)
			{
				words++;
				space = 1;
			}
			letters++;
		}
		else 
		  space = 0;
	}

		printf("Average word legnth: %.1f", letters/words);

		return 0;
}
