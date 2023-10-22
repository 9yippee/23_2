#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int year, res;

	printf("연도 입력 : ");
	scanf("%d", &year);

	res = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("res = %d\n", res);

	return 0;
}