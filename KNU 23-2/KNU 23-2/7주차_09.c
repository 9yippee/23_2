#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num < 0)
		num = -num;
	printf("절대값은 %d입니다", num);

	return 0;
}