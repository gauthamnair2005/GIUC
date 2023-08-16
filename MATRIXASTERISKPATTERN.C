#include <stdio.h>
int main(void)
{
    int max,row,col;
    printf("Matrix Asterisk Pattern Generation Program\n");
    printf("Enter the max : ");
    scanf("%d",&max);
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