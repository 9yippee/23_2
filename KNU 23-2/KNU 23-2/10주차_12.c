#include <stdio.h>
#pragma warning(disable : 4996)

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int x, y, larger;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &y);

	larger = max(x, y);
	printf("�� ū ���� %d�Դϴ�.\n", larger);
	
	return 0;
}