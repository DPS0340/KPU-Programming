#include <stdio.h>

int abs(int x) {
	if(x < 0) {
		return -x;
	}
	return x;
}

int main(void) {
	int x;
	
	printf("정수: ");
	scanf("%d", &x);
	
	printf("절대값: %d", abs(x));
	
	return 0;
}
