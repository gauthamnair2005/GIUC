#include <stdio.h>
int main(void)
{
    printf("Number Reverse Program\n");
    unsigned long long n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%u",&n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("%u\n",rev);
    return 0;
}