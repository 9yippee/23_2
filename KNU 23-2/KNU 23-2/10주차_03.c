#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	long fact = 1;
	int i = 1, n;

	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}
	printf("%d!�� %d�Դϴ�.", n, fact);
	return 0;
}