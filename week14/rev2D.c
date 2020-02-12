#include <stdio.h>

void rev2D(int (*)[4], int);

void swap(int*, int*);

int main(void) {
	int n[][4] = { 3, 6, 2, 7, 8, 9, 10, 1, 7, 17 };

	printf("--Original\n");

	for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", n[i][j]);
		}
		printf("\n");
	}

	rev2D(n, sizeof(n) / sizeof(n[0]));

	printf("\n");

	printf("--Reverse\n");

	for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", n[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void rev2D(int (*arr)[4], int len) {
	for (int i = 0; i < len / 2; i++) {
		for (int j = 0; j < 4; j++) {
			swap(&arr[i][j], &arr[len - i - 1][4 - j - 1]);
		}
	}

	for (int i = 0; i < 2; i++) {
		swap(&arr[len / 2][i], &arr[len / 2][4 - i - 1]);
	}

	return;
}

void swap(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;

	return;
}