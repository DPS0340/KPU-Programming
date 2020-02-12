#include <stdio.h>
void swap(int*, int*);

int main()
{
	int score[] = { 56, 87, 25, 90, 48, 78, 68, 63, 97, 85, 47, 57, 80, 69, 74, 28 };
	int i, j, size, tot = 0;
	double avg;

	size = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < size; i++) {
		tot += score[i];
	}

	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1; j++)
			if (score[j]<score[j + 1])
				//swap(&score[j], &score[j + 1]);
				swap(score+j, score+(j + 1));
			/*{ //swapping
				tmp = score[j + 1];
				score[j + 1] = score[j];
				score[j] = tmp;
			}*/
	}
	printf("\nSorted: ");
	for (i = 0; i < size; i++) {
		printf("%d ", score[i]);
	}
	avg = (double)tot / size;
	printf("\n\nÀüÃ¼ %d°³, ÃÑÇÕ: %d, Æò±Õ: %.1lf\n", size, tot, avg);
	return 0;
}

void swap(int *pa, int *pb)
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}