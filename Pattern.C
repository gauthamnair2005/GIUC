#include <stdio.h>

int main(void)
{
    int i, j, num;
    printf("Enter num: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("Reverse Pattern\n");
    for (i=num; i>=1; i--)
    {
        for (j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}