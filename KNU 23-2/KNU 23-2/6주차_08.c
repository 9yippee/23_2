#include <stdio.h>

int main()
{
	double light_speed = 300000;
	double distance = 149600000;

	double time_sec, time_min;
	time_sec = distance / light_speed;
	time_min = time_sec / 60.0;

	printf("빛의 속도는 %fkm/s\n", light_speed);
	printf("태양과 지구와의 거리 %fkm\n", distance);
	printf("도달 시간은 %f초\n", time_sec);
	printf("도달 시간은 %f분\n", time_min);

	return 0;
}