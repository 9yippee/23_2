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
	printf("알고 싶은 팩토리얼 값은? ");
	scanf("%d", &n);
	printf("%d!의 값은 %d입니다. \n", n, factorial(n));

	return 0;
}