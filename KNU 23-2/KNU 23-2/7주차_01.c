#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int x, y;

	printf("두 개의 정수를 입력하세요 : "); //3 4
	scanf("%d %d", &x, &y);
	
	printf("x == y의 결과값 : %d\n", x == y); // 0
	printf("x != y의 결과값 : %d\n", x != y); //1
	printf("x > y의 결과값 : %d\n", x > y); // 0
	printf("x < y의 결과값 : %d\n", x < y); // 1
	printf("x >= y의 결과값 : %d\n", x >= y); //0
	printf("x <= y의 결과값 : %d", x <= y); //1

	return 0;
}