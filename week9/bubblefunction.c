#include <stdio.h>

void bubblesort(int*, int);

void swap(int*, int*);
 
int main()
{
	int score[] = { 56, 87, 25, 90, 48, 78, 68, 63, 97, 85, 47, 57, 80, 69, 74, 28 };
	
	bubblesort(score, sizeof(score)/sizeof(score[0]));
	
	return 0;
}
 
void swap(int *pa, int *pb)
{
	int tmp;
 
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void bubblesort(int* arr, int len) {
	int i, j, size, tot = 0;
	double avg;
	
 	for (i = 0; i < len; i++) {
		tot += arr[i];
	}
 
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1; j++)
			if (arr[j]<arr[j + 1])
				swap(arr+j, arr+(j + 1));
	}
	printf("\nSorted: ");
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	avg = (double)tot / len;
	printf("\n\n전체 %d개, 총합: %d, 평균: %.1lf\n", len, tot, avg);
	
	return;
}