#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int main()
{
	int x, y, ans, i;
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);
		if (x + y == ans)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
	}
	return 0;
}