#include <stdio.h>

int main(void)
{
    unsigned long long a,b,tmp;
    printf("Greatest Common Divisor Calculator\n");
    printf("Enter two numbers: ");
    scanf("%u%u",&a,&b);
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%u\n",a);
    return 0;
}