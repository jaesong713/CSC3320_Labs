#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Name: Daniel Lee
 * Program Name: postlab2.c
 * Description: looks for the shortest and longest words within input(s)
 * and displays which one is the longest and shortest. */
int main()
{
	int i;
	char smallest_word[20] = "z";
	char largest_word[20] = "";
	char word[20];
	while(1)
	{ //The verification of the words being small or big 
		printf("Enter word: ");
		scanf("%s", word);
		if(strlen(word) == 4)/* simply 4 letters to quit*/
			break;
		//strcmp will comparethe two words
		if(strcmp(word, smallest_word) < 0)

			strcpy(smallest_word, word);
		if(strcmp(word, largest_word) > 0)

			strcpy(largest_word, word);
	}
		printf("Shortest word: %s\n", largest_word);
		printf("Longest word: %s\n", smallest_word);
	return 0;
}
