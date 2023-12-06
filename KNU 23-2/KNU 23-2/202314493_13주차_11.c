#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int prices[SIZE] = { 0 };
	int min;
	printf("------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("------------------------\n");

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 100) + 1;
		printf("%-3d", prices[i]);
	}
	printf("\n\n");
	min = prices[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (prices[i] < min)
			min = prices[i];
	}
	printf("�ּڰ��� %d�Դϴ�.\n", min);
	return 0;
}