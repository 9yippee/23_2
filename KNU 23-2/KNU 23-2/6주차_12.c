#include <stdio.h>

int main()
{
	int x = 10, y = 10, z = 33;

	x += 1;
	y *= 2;
	z %= 10 + 20; //풀어서 쓸 때는 괄호 고려

	printf("x = %d  y = %d  z = %d\n", x, y, z);

	return 0;
}