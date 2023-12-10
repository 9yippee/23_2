#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main()
{
	int x, y, ans, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);
		if (x + y == ans)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
	return 0;
}