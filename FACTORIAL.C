#include <stdio.h>
int main(void)
{
    printf("Factorial Program\n");
    unsigned long long n, i, fact;
    printf("Enter a number: ");
    scanf("%u",&n);
    for (i=1; i <= n;)
    {
        fact = i * fact;
        i = i + 1;
    }
    printf("%u\n",fact);
    return 0;
}