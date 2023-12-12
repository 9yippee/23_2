#include <stdio.h>
#define SIZE 10

int main() //Selection Sort
{
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;
		for (j = i + 1; j < SIZE; j++) //���� for �����μ� (i + 1)��° ���Һ��� �迭�� ������ ���� �߿��� �ּڰ��� ã�´�. 		
			if (list[j] < list[least]) //������ �ּҰ��� ���Ͽ� �� ���� ������ �߰ߵǸ� �� ������ ����ִ� �ε����� least�� �����Ѵ�.
				least = j;

		temp = list[i];
		list[i] = list[least];
		list[least] = temp; // list[i] �� list[least]�� ��ȯ�Ͽ� ����
	}

	for (i = 0; i < SIZE; i++)
		printf("%3d", list[i]);

	printf("\n");

	return 0;
}
