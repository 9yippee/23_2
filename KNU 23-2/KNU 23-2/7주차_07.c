#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	double f_temp, c_temp;

	printf("화씨 온도 입력하시오 : ");
	scanf("%lf", &f_temp);
	//printf("%lf\n", f_temp);
	c_temp = ((double)5 / 9) * (f_temp - 32);
	printf("섭씨 온도는 %f도 입니다", c_temp);

	return 0;
}