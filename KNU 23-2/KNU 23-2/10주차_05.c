#include <stdio.h>
#pragma warning (disable : 4996)

//int main()
//{
//	int i, j;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 0; j < i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
    int num = 5;
    for (int i = 0; i < num; i++)
    {   
        for (int j = num - 1; j > i; j--) 
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

}

//int main()
//{
//	int x, y;
//
//	for (y = 5; y >= 1; y--)
//	{
//		for (x = 0; x < y; x++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
