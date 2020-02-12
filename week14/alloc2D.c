#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int** arr = (int**)malloc(sizeof(int*) * 4);

	for (int i = 0; i < 4; i++) {
		arr[i] = (int*)malloc(sizeof(int) * 5);
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = 5 * i + j + 1;
		}
	}

	printf("출력결과\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}