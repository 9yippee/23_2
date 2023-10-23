#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");

	return 0;
}