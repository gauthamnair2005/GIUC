#include <stdio.h>
int main(void)
{
    unsigned long long int n, i, f, f1 = 0, f2 = 1;
    printf("Fibonacci Generator\n");
    printf("Enter a limit: ");
    scanf("%llu",&n);
    printf("Fibonacci Series till %llu Digits : ",n);
    printf("%llu\t%llu\t",f1,f2);
    for (i = 3; i <= n; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf("%llu\t",f);
    }
    return 0;
}