#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int integer1, integer2 , r;
	printf("請輸入2個整數:");
	scanf_s("%d %d", &integer1, &integer2);
	printf("你輸入的整數:%d %d\n", integer1, integer2);
	r = integer1 % integer2;
	if (r == 0)
	{
		printf("%d為%d的倍數\n", integer1, integer2);
	}
	else
	{
		printf("%d不是%d的倍數\n", integer1, integer2);
	}
	system("pause");
	return 0;
}