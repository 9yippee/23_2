#include <stdio.h>

int main()
{
	int x = 3;
	int y = -3;

	printf("x = %08X\n", x); //8자리의 16진수로 출력
	printf("y = %08X\n", y);
	printf("x + y = %08X\n", x + y);

	return 0;
}