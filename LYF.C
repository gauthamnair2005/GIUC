#include <stdio.h>

int main(void)
{
	int year;
	printf("Leap Year Finder\n");
	printf("--------------------------------\n");
	printf("Please Input an Year (yyyy format): ");
	scanf("%d",&year);
	if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
	{
		printf("%d is a Leap Year.!\n",year);
	}
	else
	{
		printf("%d is not a Leap Year.!\n",year);
	}
	return 0;
}