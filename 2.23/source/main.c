#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int integer1, integer2, integer3;
	printf("�п�J3�Ӿ��:");
	scanf_s("%d %d %d", &integer1, &integer2, &integer3);
	printf("�A��J���Ʀr: %d %d %d\n", integer1, integer2, integer3);
	if (integer1 > integer2 && integer1 > integer3)
	{
		printf("�̤j��:%d\n", integer1);
	}
	if (integer2 > integer1 && integer2 > integer3)
	{
		printf("�̤j��:%d\n", integer2);
	}
	if (integer3 > integer1 && integer3 > integer2)
	{
		printf("�̤j��:%d\n", integer3);
	}
	if (integer1 < integer2 && integer1 < integer3)
	{
		printf("�̤p��:%d\n", integer1);
	}
	if (integer2 < integer1 && integer2 < integer3)
	{
		printf("�̤p��:%d\n", integer2);
	}
	if (integer3 < integer1 && integer3 < integer2)
	{
		printf("�̤p��:%d\n", integer3);
	}
	system("pause");
	return 0;
}