#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("¦���Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");

	return 0;
}