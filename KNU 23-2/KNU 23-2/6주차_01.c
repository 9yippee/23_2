#include <stdio.h>

int main()
{
	int x = 3;
	int y = -3;

	printf("x = %08X\n", x); //8�ڸ��� 16������ ���
	printf("y = %08X\n", y);
	printf("x + y = %08X\n", x + y);

	return 0;
}