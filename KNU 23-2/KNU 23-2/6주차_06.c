#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int id, pass;

	printf("���̴ٿ� �н����带 4���� ���ڷ� �Է��ϼ���:\n");

	printf("id:     \b\b\b\b");
	scanf("%d", &id);

	printf("pass:     \b\b\b\b");
	scanf("%d", &pass);

	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.", id, pass);

	return 0;
}