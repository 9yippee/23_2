#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	double f_temp, c_temp;

	printf("ȭ�� �µ� �Է��Ͻÿ� : ");
	scanf("%lf", &f_temp);
	//printf("%lf\n", f_temp);
	c_temp = ((double)5 / 9) * (f_temp - 32);
	printf("���� �µ��� %f�� �Դϴ�", c_temp);

	return 0;
}