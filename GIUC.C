#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define GIUC_VERSION "23.8.26"

int main(int argc, char *argv[])
{
	if (argc == 2 && strcmp(argv[1], "-v") == 0)
	{
		printf("Version: %s\n",GIUC_VERSION);
		return 0;
	}
	else if (argc == 2 && strcmp(argv[1], "-h") == 0)
	{
		printf("Help\n");
		printf("------------------\n");
		printf("run `giuc` and then type a number representing the function mentioned in menu and you are done..!\n");
		return 0;
	}
	int command;
	printf("Gautham's Important Utility Collection\n");
	printf("%s\n",GIUC_VERSION);
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
	printf("11. Fibonacci Program\n");
	printf("12. Matrix Asterisk Program\n");
	printf("13. Matrix Pattern Program\n");
	printf("14. Exit\n");
	while (command != 14)
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
			system("numcomp.exe");
		}
		else if (command == 10)
		{
			system("gcd.exe");
		}
		else if (command == 11)
		{
			system("fibonacci.exe");
		}
		else if (command == 12)
		{
			system("matrixasteriskpattern.exe");
		}
		else if (command == 13)
		{
			system("matrixpattern.exe");
		}
		else if (command == 14)
		{
			printf("Thank you for using GIUC..!\n");
			break;
		}
		else
		{
			printf("Invalid Command %d Passed..!\n",command);
		}
	}
	return 1;
}