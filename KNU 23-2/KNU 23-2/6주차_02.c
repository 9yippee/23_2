#include <stdio.h>

int main()
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float�� ũ�� = %d\n", sizeof(float));
	printf("double�� ũ�� = %d\n", sizeof(double));

	printf("x = %30.25f\n", x); //30.25 -> �� �ڸ��� 30�ڸ�, �Ҽ��� �Ʒ� 25�ڸ�
	printf("y = %30.25f\n", y); //15��° �ڸ����� ����. 

	return 0;
}