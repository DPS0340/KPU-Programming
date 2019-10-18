#include <stdio.h>

int main(void) {
	int hour, min, sec;
	
	double time = 3.76;
	
	int time2 = time*3600;
	
	hour = time2 / 3600;
	
	min = time2 / 60 % 60;
	
	sec = time2 % 60;
	
	printf("%g시간은 %d시간 %d분 %d초입니다.\n", time, hour, min, sec);
	
	return 0;
}
