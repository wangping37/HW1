#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double a, b, c, d, e,f,g,h;
	printf("�п�J�C�Ѧ�p���{�A�C���ɨT�o�A�C���ɨT�o��p���{�ơA�C�Ѫ������O�A�C�Ѫ��L���O�A�@���H��:");
	scanf_s("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &g);
	printf("�C�Ѧ�p���{�A�C���ɨT�o�A�C���ɨT�o��p���{�ơA�C�Ѫ������O�A�C�Ѫ��L���O:%lf %lf %lf %lf %lf\n", a, b, c, d, e);
	f = a / c*b + d + e;
	h = (a / c*b + d + e) / g;
	printf("�}���O�ΡA�@���O��:%lf %lf", f, h);
	system("pause");
	return 0;
}