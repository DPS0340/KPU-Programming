#include <stdio.h>

int sum(int* arr, int len) {
	int res = 0;
	
	for(int i=0;i<len;i++) {
		res += arr[i];
	}
	
	return res;
}

double avg(int sum, int len) {
	return (double)sum / (double)len;
}

int main(void) {
	int arr[5];
	
	for(int i=0;i<5;i++) {
		printf("input: ");
		scanf("%d", &arr[i]);
	}
	
	printf("총합: %d, 평균: %.1lf", sum(arr, 5), avg(sum(arr, 5), 5));
	
	return 0;
}
