#include <stdio.h>
#pragma warning(disable : 4996)

int get_integer()
{
	int value;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &value);
	return value;
}

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int x = get_integer();
	int y = get_integer();

	int sum = add(x, y);
	printf("�� ���� ���� %d�Դϴ�.\n", sum);
	return 0;
}