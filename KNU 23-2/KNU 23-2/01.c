//01.c
#include <stdio.h>

int main()
{
	int x, y;
	int sum, sub, mul, div; // ���� �������� sub = diff�� ����

	x = 20;
	y = 10;

	sum = x + y;
	sub = x - y;  
	mul = x * y; 
	div = x / y; 

	printf("�� ���� ��:%d\n", sum);
	printf("�� ���� ��:%d\n", sub);
	printf("�� ���� ��:%d\n", mul);
	printf("�� ���� ��:%d\n", div);

	return 0;
}