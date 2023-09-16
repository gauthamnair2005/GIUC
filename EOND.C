#include <stdio.h>

int main(void)
{
	unsigned long long int num;
	printf("Even/Odd Number Determiner\n");
	printf("-------------------------------\n");
	printf("Please Input an integer : ");
	scanf("%llu",&num);
	if (num % 2 == 0)
	{
		printf("%llu is an Even Number..!\n",num);
	}
	else
	{
		printf("%llu is an Odd Number..!\n",num);
	}
	return 0;
}