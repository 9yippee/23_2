#include <stdio.h>

int x;
void sub();

int main()
{
	for (x = 0; x < 10; x++) //100개 찍히게 -> x 하나를 int로 지역변수 설정
		sub();
	return 0;
}

void sub()
{
	for (x = 0; x < 10; x++)
		printf("*");
}