#include <stdio.h>
#pragma warning (disable : 4996)

long factroial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * factroial(n - 1); //n = 5 : depth�� 4
}

int main()
{
	int n;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	printf("%d!�� %d�Դϴ�.", n, factroial(n));

	return 0;
}