#include <stdio.h>

void sub()
{
	static int scount = 0; //내부정적변수, 선언 및 초기화는 한 번만
	int acount = 0;
	printf("scount = %d\t", scount);

	printf("acount = %d\n", acount);
	scount++;
	acount++;
}

int main()
{
	sub(); //0 0 
	sub(); //1 0
	sub(); //2 0

	return 0;
}