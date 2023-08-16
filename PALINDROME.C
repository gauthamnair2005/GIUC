#include <stdio.h>
int main(void)
{
    printf("Numeral Palindrome Identification Program\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int original = n;
    int rev = 0;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == original)
    {
        printf("The given value is a palindrome\n");
    }
    else
    {
        printf("The given value is not a palindrome\n");
    }
    return 0;
}