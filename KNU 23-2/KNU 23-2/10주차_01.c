#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, n;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("===================\n");
	printf("  i      i�� ������\n");
	printf("===================\n");
	for (i = 1; i <= n; i++) //��Ƽ�� �� n, ����� �ʱ� �� i = 1
		printf("%5d    %5d\n", i, i * i * i);

	return 0;
}