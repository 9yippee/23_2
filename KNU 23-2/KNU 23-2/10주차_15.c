#include <stdio.h>
#pragma warning (disable:4996)

long factorial(int n)
{
	long res = 1;

	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}

int main()
{
	int n;
	printf("�˰� ���� ���丮�� ����? ");
	scanf("%d", &n);
	printf("%d!�� ���� %d�Դϴ�. \n", n, factorial(n));

	return 0;
}