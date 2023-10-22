#include <stdio.h>

int main()
{
	int i;
	double f;

	f = 5 / 4;
	printf("%f\n", f);	//1.000000

	f = (double)5 / 4;
	printf("%f\n", f);	//1.250000

	f = 5.0 / 4;
	printf("%f\n", f);	//1.250000

	f = (double)5 / (double)4;
	printf("%f\n", f);	//1.250000

	i = 1.3 + 1.8;
	printf("%d\n", i);	//3

	i = (int)1.3 + (int)1.8;
	printf("%d", i);	//2

	return 0;
}