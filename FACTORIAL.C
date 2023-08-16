#include <stdio.h>
int main(void)
{
    printf("Factorial Program\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact = 1;
    int i;
    for (i=1; i <= n;)
    {
        fact = i * fact;
        i = i + 1;
    }
    printf("%d\n",fact);
    return 0;
}