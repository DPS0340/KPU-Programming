#include <stdio.h>

int sum(int);

int main(void) {
	int x;
	
	printf("정수: ");
	scanf("%d", &x);
	
	printf("합: %d\n", sum(x));
	return 0;
}

int sum(int x) {
	if(x == 1) {
		return 1;
	} else {
		return x + sum(x-1);
	}
}