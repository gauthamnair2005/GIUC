#include <stdio.h>

int main(void)
{
	unsigned long long year;
	printf("Leap Year Finder\n");
	printf("--------------------------------\n");
	printf("Please Input an Year (yyyy format): ");
	scanf("%u",&year);
	if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
	{
		printf("%u is a Leap Year.!\n",year);
	}
	else
	{
		printf("%u is not a Leap Year.!\n",year);
	}
	return 0;
}