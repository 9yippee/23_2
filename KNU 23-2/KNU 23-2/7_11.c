#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int n1, n2, n3;

	printf("���� �Է� : ");
	scanf("%d", &n1);

	printf("���� �Է� : ");
	scanf("%d", &n2);
	
	if (n2 == 0)
		printf("����\n");
	else
	{
		n3 = n1 / n2;
		printf("����� %d�Դϴ�.\n", n3);
	}
	return 0;
}