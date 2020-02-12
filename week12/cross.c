#include <stdio.h>


int main(void) {
	char mark[5][5] = { 0 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j || i + j == 4) {
				mark[i][j] = 'X';
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			mark[i][j] == 'X' ? printf("X") : printf(" ");
		}
		printf("\n");
	}

	return 0;
}
