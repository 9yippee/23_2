#include <stdio.h>

int main()
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float의 크기 = %d\n", sizeof(float));
	printf("double의 크기 = %d\n", sizeof(double));

	printf("x = %30.25f\n", x); //30.25 -> 총 자리수 30자리, 소수점 아래 25자리
	printf("y = %30.25f\n", y); //15번째 자리까지 같다. 

	return 0;
}