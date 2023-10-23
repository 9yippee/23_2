#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	int res;

	res = 2 > 3 || 6 > 7;
	printf("%d\n", res);
	res = 2 || 3 && 3 > 2;
	printf("%d\n", res);

	res = x = y = 1;
	printf("%d\n", res);

	res = -++x + y--;
	printf("%d\n", res);

	return 0;
}