#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[100] = { 0 };
	double sum = 0.0;

	FILE* source = fopen("score.txt", "r");
	FILE* dest = fopen("total.txt", "w");
	if (source == NULL) {
		printf("score.txt 열기에 실패함");
		exit(1);
	}
	if (dest == NULL) {
		printf("total.txt 열기에 실패함");
		exit(1);
	}

	for (int i = 0; i < 4; i++) {
		sum = 0.0;
		fscanf(source, "%s", &s);
		fprintf(dest, "%s ", s);
		for (int j = 0; j < 3; j++) {
			double temp;
			fscanf(source, "%lf", &temp);
			sum += temp;
		}
		fprintf(dest, "%7.1lf\n", sum);
	}

	return 0;
}