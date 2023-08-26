#include <stdio.h>

int main(void)
{
    unsigned long long i, j, num;
    printf("Enter num: ");
    scanf("%u", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%u", j);
        }
        printf("\n");
    }
    printf("Reverse Pattern\n");
    for (i=num; i>=1; i--)
    {
        for (j=i; j>=1; j--)
        {
            printf("%u",j);
        }
        printf("\n");
    }

    return 0;
}