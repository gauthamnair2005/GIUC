#include <stdio.h>
#include <string.h>

int main(void)
{
    char character[50000000000];
    unsigned long long int i;
    printf("Character Extraction Program\n");
    printf("Enter a string: ");
    scanf("%[^\n]",character);
    int len = strlen(character);
    for (i = 0; i < len; i++)
    {
        printf("%c\n",character[i]);
    }
    for (i = len; i >= 0; i--)
    {
        printf("%c\n", character[i]);
    }
    return 0;
}