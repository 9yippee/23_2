#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int x, y;
	
	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d%d", &x, &y);

	printf("x == y�� ����� : %d\n", x == y); // �� 1 ���� 0 ��ȯ
	printf("x != y�� ����� : %d\n", x != y);
	printf("x > y�� ����� : %d\n", x > y);
	printf("x < y�� ����� : %d\n", x < y);
	printf("x >= y�� ����� : %d\n", x >= y);
	printf("x <= y�� ����� : %d", x <= y);
	
	return 0;
}