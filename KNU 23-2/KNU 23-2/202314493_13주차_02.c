#include <stdio.h>

void print_binary(int x);

int main()
{
	print_binary(9);
}

void print_binary(int x)
{
	if (x > 0)
	{
		print_binary(x / 2); //재귀
		printf("%d", x % 2); //나머지 출력
	}
}