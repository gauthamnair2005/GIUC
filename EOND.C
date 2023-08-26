#include <stdio.h>

int main(void)
{
	unsigned long long num;
	printf("Even/Odd Number Determiner\n");
	printf("-------------------------------\n");
	printf("Please Input an integer : ");
	scanf("%u",&num);
	if (num % 2 == 0)
	{
		printf("%u is an Even Number..!\n",num);
	}
	else
	{
		printf("%u is an Odd Number..!\n",num);
	}
	return 0;
}