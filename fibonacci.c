#include <stdio.h>
int main(void)
{
    unsigned long f,f1,f2,n;
    f1 = 0;
    f2 = 1;
    printf("Fibonacci Program\n");
    printf("Enter the limit: ");
    scanf("%ul",&n);
    printf("%ul ",f1);
    printf("%ul ",f2);
    int i;
    for (i = 3; i <= n;)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf("%ul ",f);
        i = i + 1;
    }
    printf("\n");
    return 0;
}