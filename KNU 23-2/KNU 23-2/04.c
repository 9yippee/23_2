#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	float radius, area, circumference;

	printf("������ �Է�:");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;

	printf("���� ����:%f\n", area);
	printf("���� �ѷ�:%f\n", circumference);

	return 0;
}