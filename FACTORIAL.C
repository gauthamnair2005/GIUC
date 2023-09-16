#include <stdio.h>
int main(void)
{
    printf("Factorial Program\n");
    unsigned long long int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%llu",&n);
    for (i=1; i <= n; i++)
    {
        fact = i * fact;
    }
    printf("The factorial of %llu is %llu\n",n,fact);
    return 0;
}