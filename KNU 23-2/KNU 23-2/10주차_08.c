#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char letter;

	while (1)
	{
		printf("�ҹ��� �Է� : ");
		scanf("%c", &letter);

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter >'z')
			continue;

		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}
	return 0;
}