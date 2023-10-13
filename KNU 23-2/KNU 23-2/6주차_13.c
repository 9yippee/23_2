#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int x, y;
	
	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d%d", &x, &y);

	printf("x == y의 결과값 : %d\n", x == y); // 참 1 거짓 0 반환
	printf("x != y의 결과값 : %d\n", x != y);
	printf("x > y의 결과값 : %d\n", x > y);
	printf("x < y의 결과값 : %d\n", x < y);
	printf("x >= y의 결과값 : %d\n", x >= y);
	printf("x <= y의 결과값 : %d", x <= y);
	
	return 0;
}