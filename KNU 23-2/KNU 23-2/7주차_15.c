#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char op;
	int x, y, res;

	printf("������ �Է��ϼ���.\n");
	printf("(�� : 2 + 5)\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		res = x + y;
	else if (op == '-')
		res = x - y;
	else if (op == '*')
		res = x * y;
	else if (op == '/')
		res = x / y;
	else if (op == '%')
		res = x % y;
	else
		printf("�������� �ʴ� �������Դϴ�.\n");
	printf("%d %c %d = %d\n", x, op, y, res);

	return 0;
}