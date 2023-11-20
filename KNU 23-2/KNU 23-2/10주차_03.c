#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	long fact = 1;
	int i = 1, n;

	printf("정수 입력하시오 : ");
	scanf("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}
	printf("%d!은 %d입니다.", n, fact);
	return 0;
}