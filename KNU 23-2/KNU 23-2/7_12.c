#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int year;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("�����Դϴ�.\n");
	else
		printf("������ �ƴմϴ�.");

	return 0;
}