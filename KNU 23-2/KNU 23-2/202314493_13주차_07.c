#include <stdio.h>

int main()
{
	int scores[5] = { 31, 63 };
	int i;

	for (i = 0; i < 5; i++)
		printf("score[%d] = %d\n", i, scores[i]);

	return 0;
}