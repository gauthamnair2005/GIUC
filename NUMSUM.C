#include <stdio.h>
int main(void)
{
    printf("Number Sum Program\n");
    unsigned long long int n, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%llu",&n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%llu\n",sum);
    return 0;
}