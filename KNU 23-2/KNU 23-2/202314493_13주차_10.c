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
		printf("좌석을 예약하시겠습니까?(y 또는 n) : ");
		scanf("%c", &ans1);
		getchar(); //enter 제거

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

		printf("\n몇 번째 좌석을 예약하시겠습니까 ? : ");
		scanf("%d", &ans2);
		getchar(); // enter 제거
		
		if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("\n예약되었습니다.\n\n");
		}
		else
			printf("이미 예약된 자리입니다.\n");
	}
	return 0;
}