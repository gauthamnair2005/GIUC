#include <stdio.h>

int main(void)
{
	long double b,h,area;
	printf("Right Angle Triangle Area Calculator\n");
	printf("--------------------------------------------\n");
	printf("Please Input Base and Height: ");
	scanf("%Lf%Lf",&b,&h);
	area = 0.5 * b * h;
	printf("The Area is %Lf\n",area);
	return 0;
}