#include <stdio.h>

int main(void) {
	int result = 0;
	int temp;
	while(scanf("%d", &temp) != EOF) {
		if(temp < 1) {
			printf("current sum = %d\n", result);
			break;
		} else {
			result += temp;
			printf("sum = %d\n", result);
		}
	}
	return 0;
}
