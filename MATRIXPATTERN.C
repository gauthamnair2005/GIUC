#include <stdio.h>
int main(void)
{
    unsigned long long int max,row,col;
    printf("Matrix Pattern Generation Program\n");
    printf("Enter the max : ");
    scanf("%llu",&max);
    for (row = 1; row <= max;)
    {
        for (col = 1; col <= max;)
        {
            printf("%llu ",col);
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
    printf("\n");
    return 0;
}