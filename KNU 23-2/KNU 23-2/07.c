#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	float radius, area;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%f", &radius);

	area = 3.141592 * radius * radius;
	printf("���� ���� : %f\n", area);

	return 0;
}