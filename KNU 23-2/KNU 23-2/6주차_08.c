#include <stdio.h>

int main()
{
	double light_speed = 300000;
	double distance = 149600000;

	double time_sec, time_min;
	time_sec = distance / light_speed;
	time_min = time_sec / 60.0;

	printf("���� �ӵ��� %fkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ� %fkm\n", distance);
	printf("���� �ð��� %f��\n", time_sec);
	printf("���� �ð��� %f��\n", time_min);

	return 0;
}