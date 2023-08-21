#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
	int command;
	printf("Gautham's Important Utility Collection\n");
	printf("Suite Version 23.8.20\n");
	printf("-----------------------\n");
	printf("Press the following keys to perfrom an action\n");
	printf("1. Simple Interest Calculator\n");
	printf("2. Leap Year Finder\n");
	printf("3. Right Angle triangle Area Calculator\n");
	printf("4. Age Calculator\n");
	printf("5. Even/Odd Number Determiner\n");
	printf("6. Character Extraction Program\n");
	printf("7. Pattern Program\n");
	printf("8. NumberFlow Program\n");
	printf("9. Number Comparison Program\n");
	printf("10. Greatest Command Divisor Calculator\n");
	printf("11. Exit\n");
	while (command != 8)
	{
		printf("> ");
		scanf("%d",&command);
		if (command == 1)
		{
			system("./sic");
		}
		else if (command == 2)
		{
			system("./sic");
		}
		else if (command == 3)
		{
			system("./sic");
		}
		else if (command == 4)
		{
			system("./age");
		}
		else if (command == 5)
		{
			system("./eond");
		}
		else if (command == 6)
		{
			system("./cep");
		}
		else if (command == 7)
		{
			system("./pattern");
		}
		else if (command == 8)
		{
			system("./matrix");
		}
		else if (command == 9)
		{
			system("./numcomp");
		}
		else if (command == 10)
		{
			system("./gcd");
		}
		else if (command == 11)
		{
			printf("Thank you for using GIUC..!\n");
			break;
		}
		else
		{
			printf("Invalid Command %d Passed..!\n",command);
		}
	}
	return 0;
}