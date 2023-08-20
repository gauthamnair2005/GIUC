#include <stdio.h>

int main(void)
{
    int a,b,tmp;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("%d",a);
    return 0;
}