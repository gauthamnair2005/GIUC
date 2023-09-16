#include <stdio.h>

int main(void)
{
    unsigned long long int a,b,tmp;
    printf("Greatest Common Divisor Calculator\n");
    printf("Enter two numbers: ");
    scanf("%llu%llu",&a,&b);
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%llu\n",a);
    return 0;
}