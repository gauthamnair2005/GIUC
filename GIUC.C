#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
	int command;
	printf("Gautham's Important Utility Collection\n");
	printf("Suite Version 0.0.1\n");
	printf("-----------------------\n");
	printf("Press the following keys to perfrom an action\n");
	printf("1. Simple Interest Calculator\n");
	printf("2. Leap Year Finder\n");
	printf("3. Right Angle triangle Area Calculator\n");
	printf("4. Age Calculator\n");
	printf("5. Even/Odd Number Determiner\n");
	printf("6. Character Extraction Program\n");
	printf("7. Pattern Program\n");
	printf("8. Matrix Program\n");
	printf("9. Exit\n");
	while (command != 8)
	{
		printf("> ");
		scanf("%d",&command);
		if (command == 1)
		{
			system("sic.exe");
		}
		else if (command == 2)
		{
			system("lyf.exe");
		}
		else if (command == 3)
		{
			system("ratac.exe");
		}
		else if (command == 4)
		{
			system("age.exe");
		}
		else if (command == 5)
		{
			system("eond.exe");
		}
		else if (command == 6)
		{
			system("cep.exe");
		}
		else if (command == 7)
		{
			system("pattern.exe");
		}
		else if (command == 8)
		{
			system("matrix.exe");
		}
		else if (command == 9)
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