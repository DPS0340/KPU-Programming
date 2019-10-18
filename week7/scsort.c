#include <stdio.h>

void sort(int* arr, int len) {
	for(int i=0;i<len;i++) {
		for(int j=0;j<i;j++) {
			if(arr[j] < arr[i]) {
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t; 
			}
		}
	}
}

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
	
	sort(arr, 5);
	
	printf("내림차순\n");
	
	for(int i=0;i<5;i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\n\n");
	
	printf("총합: %d, 평균: %.1lf\n", sum(arr, 5), avg(sum(arr, 5), 5));
	
	return 0;
}
