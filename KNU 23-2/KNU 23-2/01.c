//01.c
#include <stdio.h>

int main()
{
	int x, y;
	int sum, sub, mul, div; // 강의 내에서는 sub = diff로 선언

	x = 20;
	y = 10;

	sum = x + y;
	sub = x - y;  
	mul = x * y; 
	div = x / y; 

	printf("두 수의 합:%d\n", sum);
	printf("두 수의 차:%d\n", sub);
	printf("두 수의 곱:%d\n", mul);
	printf("두 수의 몫:%d\n", div);

	return 0;
}