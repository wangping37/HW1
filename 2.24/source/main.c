#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int integer1, integer2;
	printf("請輸入1個整數:");
	scanf_s("%d", &integer1);
	printf("你輸入的整數:%d\n", integer1);
	integer2 = integer1 % 2;
	if (integer2 == 0)
	{
		printf("你輸入的是偶數\n");
	}
	else
	{
		printf("你輸入的是奇數\n");
	}
	system("pause");
	return 0;
}