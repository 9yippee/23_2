#include <stdio.h>
#pragma warning (disable : 4996)

int get_integer()
{
	int n;

	printf("정수 입력 : ");
	scanf("%d", &n);
	return n;
}

int is_prime(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n, res;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d은 소수입니다.\n", n);
	else
		printf("%d은 소수가 아닙니다.\n", n);

	return 0;
}