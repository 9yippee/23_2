#include <stdio.h>
#pragma warning (disable : 4996)
#define SIZE 10

int main()
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) : ");
		scanf("%c", &ans1);
		getchar(); //enter ����

		if (ans1 == 'y')
		{
			printf("---------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("---------------------\n");
		}
		else
			break;
		
		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");

		printf("\n�� ��° �¼��� �����Ͻðڽ��ϱ� ? : ");
		scanf("%d", &ans2);
		getchar(); // enter ����
		
		if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("\n����Ǿ����ϴ�.\n\n");
		}
		else
			printf("�̹� ����� �ڸ��Դϴ�.\n");
	}
	return 0;
}