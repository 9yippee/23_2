#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char c;
	int i;
	float f;

	c = 10000;
	i = 1.23456 + 10;
	f = 10 + 20;

	printf("c = %d, i = %d, f = %f\n", c, i, f);

	return 0;
}