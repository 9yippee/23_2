#include <stdio.h>

int inc(int counter);

int main()
{
	int i, j;

	i = 10;
	printf("�Լ� ȣ�� �� i = %d\n", i);
	j = inc(i);
	printf("�Լ� ȣ�� �� i = %d\n", i);

	return 0;
}

int inc(int counter)
{
	return counter++;
}