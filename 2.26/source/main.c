#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int integer1, integer2 , r;
	printf("�п�J2�Ӿ��:");
	scanf_s("%d %d", &integer1, &integer2);
	printf("�A��J�����:%d %d\n", integer1, integer2);
	r = integer1 % integer2;
	if (r == 0)
	{
		printf("%d��%d������\n", integer1, integer2);
	}
	else
	{
		printf("%d���O%d������\n", integer1, integer2);
	}
	system("pause");
	return 0;
}