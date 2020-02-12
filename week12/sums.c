#include <stdio.h>

int main(void) {
	int arr[5][6];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = 5 * i + (j + 1);
		}
	}
	for (int i = 0; i < 4; i++) {
		int sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += arr[i][j];
		}
		arr[i][5] = sum;
	}
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += arr[j][i];
		}
		arr[4][i] = sum;
	}
	{
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			sum += arr[4][i];
		}
		arr[4][5] = sum;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}