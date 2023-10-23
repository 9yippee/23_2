#include <stdio.h>
#include <limits.h>

int main()
{
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX; //65535

	s_money += 1;
	printf("s_money = %d\n", s_money);

	u_money += 1;
	printf("u_money = %d", u_money);

	return 0;
}