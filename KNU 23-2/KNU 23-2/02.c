//02.c
#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int x, y, sum;

	printf("ù ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &y);

	sum = x + y;
	printf("�� ���� �� :%d", sum);

	return 0;
}