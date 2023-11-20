#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	int x, y;
//	for (y = 5; y >= 1; y--)
//	{
//		for (x = 0; x < y; x++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//강의 코드