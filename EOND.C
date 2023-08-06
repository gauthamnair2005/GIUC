#include <stdio.h>

int main(void)
{
	int num;
	printf("Even/Odd Number Determiner\n");
	printf("-------------------------------\n");
	printf("Please Input an integer : ");
	scanf("%d",&num);
	if (num % 2 == 0)
	{
		printf("%d is an Even Number..!\n",num);
	}
	else
	{
		printf("%d is an Odd Number..!\n",num);
	}
	return 0;
}