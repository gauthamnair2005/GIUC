#include <stdio.h>

int main(void)
{
    long double n1,n2,n3;
    printf("Number Comparison Program\n");
    printf("--------------------------------------------------\n");
    printf("Enter 3 numbers: ");
    scanf("%Lf%Lf%Lf",&n1,&n2,&n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%Lf is greater\n",n1);
        }
        else
        {
            printf("%Lf is greater\n",n3);
        }
    }
    else if (n1 < n2)
    {
        if (n2 > n3)
        {
            printf("%Lf is greater\n",n2);
        }
        else
        {
            printf("%Lf is greater\n",n3);
        }
    }
    else
    {
        if (n1 == n3)
        {
            printf("All numbers are equal\n");
        }
        else
        {
            if (n1 > n3)
            {
                printf("%Lf is greater\n",n1);
            }
            else
            {
                printf("%Lf is greater\n",n3);
            }
        }
    }
    return 0;
}