#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num > 0)
		printf("����Դϴ�\n");
	else if (num < 0)
		printf("�����Դϴ�\n");
	else
		printf("0�Դϴ�.\n");
	
	printf("�Էµ� ���� %d�Դϴ�.", num);

	return 0;
}