#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num > 0)
		printf("양수입니다\n");
	else if (num < 0)
		printf("음수입니다\n");
	else
		printf("0입니다.\n");
	
	printf("입력된 값은 %d입니다.", num);

	return 0;
}