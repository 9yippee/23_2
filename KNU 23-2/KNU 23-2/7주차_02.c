#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int x, y;

	printf("�� ���� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);

	printf("%d && %d�� ����� : %d\n", x, y, x && y);
	printf("%d || %d�� ����� : %d\n", x, y, x || y);
	printf("!%d�� ����� : %d", x, !x);

	return 0;
}