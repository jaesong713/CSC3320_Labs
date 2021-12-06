#include <stdio.h>

int main(void)
{
char charvar = '\0';
printf("address of charvar = %p\n", (void *)(&charvar));
printf("address of charvar - 1 = %p\n", (void *)(&charvar - 1));
printf("address of charvar + 1 = %p\n", (void *)(&charvar + 1));

int intvar = 1;
printf("address of intvar = %p\n", (void *)(&intvar));
printf("address of intvar - 1 = %p\n", (void *)(&intvar - 1));
printf("address of intvar + 1 = %p\n", (void *)(&intvar + 1));
}
