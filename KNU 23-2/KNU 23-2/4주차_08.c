#include <stdio.h>

int main(void)
{
	int x;

	printf("���� x�� ũ�� : %d\n", sizeof(x)); //4
	printf("char���� ũ�� : %d\n", sizeof(char)); //1
	printf("int���� ũ�� : %d\n", sizeof(int)); //4
	printf("short���� ũ�� : %d\n", sizeof(short)); //2
	printf("long���� ũ�� : %d\n", sizeof(long)); //4
	printf("float���� ũ�� : %d\n", sizeof(float)); //4
	printf("double���� ũ�� : %d\n", sizeof(double)); //8

	return 0;
}