#include <stdio.h>

int main(void)
{
	double width, height, area, perimeter;

	width = 10.0;
	height = 5.0;
	area = width * height;
	perimeter = 2 * (width + height);

	printf("�簢���� �ѷ� :%lf\n", area);
	printf("�簢���� ���� :%lf\n", perimeter);

	return 0;
}