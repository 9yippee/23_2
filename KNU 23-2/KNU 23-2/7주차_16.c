#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main()
{
	double a, b, c, dis;
	printf("계수 a, 계수 b, 계수 c를 순서대로 입력하시오 : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
		printf("방정식의 근은 %f입니다.\n", -c / b);
	else
	{
		dis = sqrt(b * b - 4.0 * a * c);
		if (dis >= 0)
		{
			printf("방정식의 근은 %f입니다.\n", (-b + dis) / (2.0 * a));
			printf("방정식의 근은 %f입니다.\n", (-b - dis) / (2.0 * a));
		}
		else
			printf("실근이 존재하지 않습니다.\n");
	}
	return 0;
}