#include <stdio.h>
int main(void) {
    unsigned long long int m,n,temp,tmp;
    printf("GCD Program\n");
    printf("--------------------------------\n");
    printf("Enter the two numbers: ");
    scanf("%llu%llu",&m,&n);
    tmp = m;
    temp = n;
    while (m != n) {
        if (m > n) {
            m = m - n;
        } else {
            n = n - m;
        }
    }
    printf("The GCD of %llu and %llu is %llu\n",tmp,temp,m);
    return 0;
}