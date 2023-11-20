#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	double divisor, divident, sum;
	int cnt;

	divisor = 1.0;
	divident = 4.0;
	sum = 0.0;
	printf("¹Ýº¹ È½¼ö : ");
	scanf("%d", &cnt);

	while (cnt > 0)
	{
		sum = sum + divident / divisor;
		divident = (-1.0) * divident;
		divisor = divisor + 2;
		cnt++;
	}
	printf("Pi = %f", sum);
	return 0;
}