#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int integer1, integer2;
	printf("�п�J1�Ӿ��:");
	scanf_s("%d", &integer1);
	printf("�A��J�����:%d\n", integer1);
	integer2 = integer1 % 2;
	if (integer2 == 0)
	{
		printf("�A��J���O����\n");
	}
	else
	{
		printf("�A��J���O�_��\n");
	}
	system("pause");
	return 0;
}