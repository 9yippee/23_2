#include <math.h>
#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	double height, distance, tree_height, degrees, radians;

	printf("�������� �Ÿ�(������ ����) : ");
	scanf("%lf", &distance);

	printf("�������� Ű(������ ����) : ");
	scanf("%lf", &height);

	printf("����(������ ��) : ");
	scanf("%lf", &degrees);

	radians = degrees * (3.141592 / 180.0);
	
	tree_height = tan(radians) * distance + height;

	printf("������ ����(������ ����) : %lf\n", tree_height);
	
	return 0;
}