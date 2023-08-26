#include <stdio.h>
int main(void)
{
    unsigned long long n, i, f, f1 = 0, f2 = 1;
    printf("Fibonacci Generator\n");
    printf("Enter a limit: ");
    scanf("%u",&n);
    printf("Fibonacci Series till %u Digits : ",n);
    printf("%u\t%u\t",f1,f2);
    for (i = 3; i <= n; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf("%u\t",f);
    }
    return 0;
}