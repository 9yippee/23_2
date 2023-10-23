#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int n1, n2, n3;

	printf("정수 입력 : ");
	scanf("%d", &n1);

	printf("정수 입력 : ");
	scanf("%d", &n2);
	
	if (n2 == 0)
		printf("오류\n");
	else
	{
		n3 = n1 / n2;
		printf("결과는 %d입니다.\n", n3);
	}
	return 0;
}