#include <stdio.h>
int main(void)
{
    printf("Number Reverse Program\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev = 0;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("%d\n",rev);
    return 0;
}