#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, n;

	printf("정수를 입력하시요 : ");
	scanf("%d", &n);

	printf("===================\n");
	printf("  i      i의 세제곱\n");
	printf("===================\n");
	for (i = 1; i <= n; i++) //센티널 값 n, 제어변수 초기 값 i = 1
		printf("%5d    %5d\n", i, i * i * i);

	return 0;
}