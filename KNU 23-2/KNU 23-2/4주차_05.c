#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	double rate, usd;
	int krw;

	printf("ȯ���� �Է��Ͻÿ� :");
	scanf("%lf", &rate);

	printf("��ȭ �ݾ��� �Է��Ͻÿ� :");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %lf �޷��Դϴ�.\n", krw, usd);

	return 0;
}