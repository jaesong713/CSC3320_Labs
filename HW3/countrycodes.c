#include <stdio.h>

int main(void)
{
	int area_code;

	printf("What is your area code?\n");
	scanf("%d", &area_code);
	
	switch (area_code) {
	case 54: printf("Argentina\n"); break;
	case 880: printf("Bangladesh\n"); break;
	case 55: printf("Brazil\n"); break;
	case 95: printf("Burma (Myanmar)\n"); break;
	case 86: printf("China\n"); break;
	case 57: printf("Colombia\n"); break;
	case 243: printf("Congo, Dem. Rep. of\n"); break;
	case 20: printf("Egypt\n"); break;
	case 251: printf("Ethiopia\n"); break;
	case 33: printf("France\n"); break;
	case 49: printf("Germany\n"); break;
	case 91: printf("India\n"); break;
	case 62: printf("Indonesia\n"); break;
	case 98: printf("Iran\n"); break;
	case 39: printf("Italy\n"); break;
	case 81: printf("Japan\n"); break;
	case 52: printf("Mexico\n"); break;
	case 234: printf("Nigera\n"); break;
	case 92: printf("Pakistan\n"); break;
	case 63: printf("Phillipines\n"); break;
	case 48: printf("Poland\n"); break;
	case 7: printf("Russia\n"); break;
	case 27: printf("South Africa\n"); break;
 	case 82: printf("South Korea\n"); break;
	case 1: printf("United States\n"); break;
	default: printf("Area code not recognized.\n"); break;
	}
	return 0;
}
