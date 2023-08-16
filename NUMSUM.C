#include <stdio.h>
int main(void)
{
    printf("Number Sum Program\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%d\n",sum);
    return 0;
}