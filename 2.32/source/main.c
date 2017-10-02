#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double h, w,b;
	printf("請輸入身高m體重kg:");
	scanf_s("%lf %lf", &h, &w);
	printf("BMI value\n");
	b = w / (h*h);
	if (b < 18.5)
	{
		printf("Undeweight:less than 18.5\n");
	}
	if (b >= 18.5 && b <= 24.9)
	{
		printf("Normal:between 18.5 and 24.9\n");
	}
	if (b >=25  && b <= 29.9)
	{
		printf("Overweight:between 25 and 29.9\n");
	}
	if (b >= 30)
	{
		printf("Obese:30 or greater\n");
	}
	system("pause");
	return 0;
}
