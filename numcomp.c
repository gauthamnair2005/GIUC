#include <stdio.h>

int main(void)
{
    float n1,n2,n3;
    printf("Number Comparison Program\n");
    printf("--------------------------------------------------\n");
    printf("Enter 3 numbers: ");
    scanf("%f%f%f",&n1,&n2,&n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%f is greater\n",n1);
        }
        else
        {
            printf("%f is greater\n",n3);
        }
    }
    else if (n1 < n2)
    {
        if (n2 > n3)
        {
            printf("%f is greater\n",n2);
        }
        else
        {
            printf("%f is greater\n",n3);
        }
    }
    else
    {
        if (n1 == n3)
        {
            printf("All are equal\n");
        }
        else
        {
            if (n1 > n3)
            {
                printf("%f is greater\n",n1);
            }
            else
            {
                printf("%f is greater\n",n3);
            }
        }
    }
    return 0;
}