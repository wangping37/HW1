#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int integer1, integer2, integer3;
	printf("叫块3俱计:");
	scanf_s("%d %d %d", &integer1, &integer2, &integer3);
	printf("块计: %d %d %d\n", integer1, integer2, integer3);
	if (integer1 > integer2 && integer1 > integer3)
	{
		printf("程计:%d\n", integer1);
	}
	if (integer2 > integer1 && integer2 > integer3)
	{
		printf("程计:%d\n", integer2);
	}
	if (integer3 > integer1 && integer3 > integer2)
	{
		printf("程计:%d\n", integer3);
	}
	if (integer1 < integer2 && integer1 < integer3)
	{
		printf("程计:%d\n", integer1);
	}
	if (integer2 < integer1 && integer2 < integer3)
	{
		printf("程计:%d\n", integer2);
	}
	if (integer3 < integer1 && integer3 < integer2)
	{
		printf("程计:%d\n", integer3);
	}
	system("pause");
	return 0;
}