#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	float radius, area;

	printf("원의 반지름을 입력하시오 : ");
	scanf("%f", &radius);

	area = 3.141592 * radius * radius;
	printf("원의 면적 : %f\n", area);

	return 0;
}