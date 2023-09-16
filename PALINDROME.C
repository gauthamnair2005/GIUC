#include <stdio.h>
int main(void)
{
    printf("Numeral Palindrome Identification Program\n");
    unsigned long long int n, original = n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%llu",&n);
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