#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num < 0)
		num = -num;
	printf("���밪�� %d�Դϴ�", num);

	return 0;
}