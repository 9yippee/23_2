#include <stdio.h>
#pragma warning (disable : 4996)
#define SEC_PER_MINUTE 60

int main()
{
	int input, minute, second;

	printf("초를 입력하시오 : ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);
	
	return 0;
}