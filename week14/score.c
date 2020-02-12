#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _student {
	int code;
	char* name;
	int korean;
	int english;
	int math;
} student;

char grade(double);

int main(void) {
	student* arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = (student*)malloc(sizeof(student));
		arr[i]->name = (char*)malloc(sizeof(char) * 20);

		printf("학번 : ");
		scanf("%d", &arr[i]->code);
		printf("이름 : ");
		rewind(stdin);
		scanf("%s", arr[i]->name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &arr[i]->korean, &arr[i]->english, &arr[i]->math);
	}

	for (int i = 0; i < 5; i++) {
		int sum = arr[i]->korean + arr[i]->english + arr[i]->math;
		double avg = sum / 3.0;
		printf("%d %s %4d %4d %4d %4d %6.1lf   %c\n", arr[i]->code, arr[i]->name, arr[i]->korean, arr[i]->english, arr[i]->math, sum, avg, grade(avg));
	}
}

char grade(double avg) {
	if (avg >= 90) return 'A';
	if (avg >= 80) return 'B';
	if (avg >= 70) return 'C';
	return 'F';
}