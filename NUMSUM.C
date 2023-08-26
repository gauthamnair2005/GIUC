#include <stdio.h>
int main(void)
{
    printf("Number Sum Program\n");
    unsigned long long n, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%u",&n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%u\n",sum);
    return 0;
}