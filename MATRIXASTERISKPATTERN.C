#include <stdio.h>
int main(void)
{
    unsigned long long max,row,col;
    printf("Matrix Asterisk Pattern Generation Program\n");
    printf("Enter the max : ");
    scanf("%u",&max);
    for (row = 1; row <= max;)
    {
        for (col = 1; col <= max;)
        {
            printf("* ");
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
    printf("\n");
    return 0;
}