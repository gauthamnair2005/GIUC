#include <stdio.h>

int main(void)
{
	long double p,t,r,si;
	printf("Simple Interest Calculator\n");
	printf("--------------------------------------\n");
	printf("Please Input the Principal Amount, Time and Rate Respectively: ");
	scanf("%Lf%Lf%Lf",&p,&t,&r);
	si = (p*t*r) / 100;
	printf("The Simple Interest is %Lf\n",si);
	return 0;
}