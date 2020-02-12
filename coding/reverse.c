#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(int*, int);

void swap(int*, int*);

int main(void) {
	int a[] = { 1, 3, 5, 23, 6, 9, 10, 7, 9 };
	
	reverse(a, sizeof(a) / sizeof(a[0]));

	printf("¹è¿­ a´Â ");

	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}

void reverse(int* arr, int len) {
	for (int i = 0; i < len / 2; i++) {
		swap(&arr[i], &arr[len - i - 1]);
	}

	return;
}

void swap(int* pa, int* pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;

	return;
}