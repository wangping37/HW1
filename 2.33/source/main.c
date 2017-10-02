#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double a, b, c, d, e,f,g,h;
	printf("請輸入每天行駛里程，每公升汽油，每公升汽油行駛里程數，每天的停車費，每天的過路費，共乘人數:");
	scanf_s("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &g);
	printf("每天行駛里程，每公升汽油，每公升汽油行駛里程數，每天的停車費，每天的過路費:%lf %lf %lf %lf %lf\n", a, b, c, d, e);
	f = a / c*b + d + e;
	h = (a / c*b + d + e) / g;
	printf("開車費用，共乘費用:%lf %lf", f, h);
	system("pause");
	return 0;
}