#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char op;
	int x, y, res;

	printf("수식을 입력하세요.\n");
	printf("(예 : 2 + 5)\n");
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
		printf("지원되지 않는 연산자입니다.\n");
	printf("%d %c %d = %d\n", x, op, y, res);

	return 0;
}