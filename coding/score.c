#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int*, int);

double avg(int);

int main(void) {
	int a[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("input: ");
		scanf("%d", &a[i]);
	}

	int sumOfArr = sum(a, sizeof(a) / sizeof(a[0]));

	double avgOfArr = avg(sumOfArr);

	printf("ÃÑÁ¡: %d\nÆò±Õ: %.1lf", sumOfArr, avgOfArr);

	return 0;
}

int sum(int* arr, int len) {
	int res = 0;
	for (int i = 0; i < len; i++) {
		res += arr[i];
	}

	return res;
}

double avg(int sum) {
	return (double)sum / 5.0;
}