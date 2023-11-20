#include <stdio.h>
#pragma warning(disable : 4996)

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int x, y, larger;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf("%d", &y);

	larger = max(x, y);
	printf("더 큰 값은 %d입니다.\n", larger);
	
	return 0;
}