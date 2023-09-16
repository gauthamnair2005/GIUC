#include <stdio.h>

int main(void)
{
    unsigned long long int i, j, num;
    printf("Enter num: ");
    scanf("%llu", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%llu", j);
        }
        printf("\n");
    }
    printf("Reverse Pattern\n");
    for (i=num; i>=1; i--)
    {
        for (j=i; j>=1; j--)
        {
            printf("%llu",j);
        }
        printf("\n");
    }

    return 0;
}