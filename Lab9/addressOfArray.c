#include <stdio.h>

int main(void)
{
int numbers[5] = {1,2,3,4,5};
int i = 0;

printf("numbers = %p\n", numbers);

do {
printf("numbers[%u] = %p\n", i, (void *)(&numbers[i]));
 i++;
} while(i < 5);

 printf("sizeof(numbers) = %lu\n", sizeof(numbers));
}
