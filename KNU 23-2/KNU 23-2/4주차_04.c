#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	float radius, area, circumference;

	printf("반지름 입력:");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;

	printf("원의 면적:%f\n", area);
	printf("원의 둘레:%f\n", circumference);

	return 0;
}