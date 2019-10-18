#include <stdio.h>

void reverse_print(int* arr, int len) {
	for(int i=0;i<len/2;i++) {
		int t = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = t;
	}
}

int main(void) {
	int a[] = {1, 3, 5, 23, 6, 9, 10, 7, 9};
	
	printf("배열 a는 ");
	reverse_print(a, sizeof(a) / sizeof(a[0]));
	for(int i=0;i<sizeof(a) / sizeof(a[0]);i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}
