#include <stdio.h>
#pragma warning (disable : 4996)

int get_integer()
{
	int n;

	printf("���� �Է� : ");
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
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);

	return 0;
}