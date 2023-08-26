#include <stdio.h>

int main(void)
{
	double b,h,area;
	printf("Right Angle Triangle Area Calculator\n");
	printf("--------------------------------------------\n");
	printf("Please Input Base and Height: ");
	scanf("%f%f",&b,&h);
	area = 0.5 * b * h;
	printf("The Area is %f\n",area);
	return 0;
}