#include <stdio.h>
#define SIZE 5

int main()
{
	int i;
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE] = { 1, 2, 3, 4, 5 };

	for (i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("a[]와 b[]는 같지 않습니다.\n");
			return 0;
		}
	}
	printf("a[]와 b[]는 같습니다.\n");
	return 0;
}	