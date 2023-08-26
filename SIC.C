#include <stdio.h>

int main(void)
{
	double p,t,r,si;
	printf("Simple Interest Calculator\n");
	printf("--------------------------------------\n");
	printf("Please Input the Principal Amount, Time and Rate Respectively: ");
	scanf("%f%f%f",&p,&t,&r);
	si = (p*t*r) / 100;
	printf("The Simple Interest is %f\n",si);
	return 0;
}