#include <stdio.h>
#pragma warning (disable : 4996)

long factroial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * factroial(n - 1); //n = 5 : depth는 4
}

int main()
{
	int n;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	printf("%d!은 %d입니다.", n, factroial(n));

	return 0;
}