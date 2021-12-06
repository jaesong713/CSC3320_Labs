#include<stdio.h>
/* Name: Daniel Lee
 * Program Name: Splitting Time
 * Description: This program will input seconds and convert it to 
 * hour minutes and seconds */
void split_time(long, int*, int*, int*);

	int main(){
	int n, hr = 0, min = 0, sec = 0;
	printf("Enter Seconds : ");
	scanf("%d", &n);
	if(n < 0) { // a statement as to where it makes sure that the input is
		    // valid.
		printf("Please enter a non negative value. . .");
		}
	else{
	split_time(n, &hr, &min, &sec);
	printf("Converted format: %d hour %d mins %d secs\n", hr, min, sec);
	}
	return 0;
	}
	/* the calculations that are needed to convert all the units are below.
  	 */
		void split_time(long total_sec, int* hr, int* min, int* sec){
			int seconds = 0;
			*hr = total_sec / 3600;
			seconds = total_sec % 3600;
			*min = seconds / 60;
			*sec = seconds % 60;
		}


