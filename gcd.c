#include <stdio.h>

int main(void)
{
    int a,b,tmp;
    printf("Greatest Common Divisor Calculator\n");
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%d\n",a);
    return 0;
}