#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int a, b, c;
	//int cnt = 0;
	for (a = 1; a <= 100; a++)
		for (b = a; b <= 100; b++)
			for (c = b; c <= 100; c++)
				if ((a * a + b * b) == c * c)
				{
					printf("%d %d %d\n", a, b, c);
					//cnt += 1;
				}
	//printf("cnt = %d", cnt);
	return 0;
}