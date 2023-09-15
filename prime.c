#include <stdio.h>
#include <conio.h>

void main(void) {
    int i, num, temp;
    printf("Enter : ");
    scanf("%d",&num);
    for (i = 2; i < num; i++) {
        temp = num % i;
    }
    if (temp == 0) {
        printf("It is a prime num");
    }
    else {
        printf("Not Prime Number");
    }
}