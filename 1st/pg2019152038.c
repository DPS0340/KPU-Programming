#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int notscore(int);
char get_grade(double);

struct student {
	int number;
	int score[3];
	int total;
	double avg;
	char grade;
};

struct student make_student(int number) {
	struct student st;
	st.number = number;
	return st;
};

int main()
{
	struct student students[30];
	int stds = 30;
	int i, j, num;

	printf("�л����� �Է��Ͻÿ�(�ִ� 30 ��):");
	scanf("%d", &stds);
	if (stds > 30 || stds < 1) {
		printf("�л��� ����!!\n");
		printf("�ƹ� ���ڳ� �����ÿ�!!");
		scanf("%d", &i);
		return 0;
	}
	for (i = 0; i < stds; i++) {
		printf("%d ��° �л� �й��Է�: ", i + 1);
		scanf("%d", &num);
		students[i] = make_student(num);
		int total = 0;
		for (j = 0; j < 3; j++) {
			printf("%d ��° �л� %d Ƚ�� ���� �Է�: ", i + 1, j + 1);
			scanf("%d", &num);
			if (notscore(num)) {
				printf("�ƹ� ���ڳ� �����ÿ�!!");
				scanf("%d", &i);
				return 0;
			}
			total += num;
			students[i].score[j] = num;
		}
		students[i].total = total;
		students[i].avg = (double)total / 3.0;
		students[i].grade = get_grade(students[i].avg);
	}
	for (i = 0; i < 45; i++) {
		printf("=");
	}
	printf("\n");
	printf(" �й�  ����1  ����2  ����3  ����  ���  ����\n");
	for (i = 0; i < 45; i++) {
		printf("=");
	}
	printf("\n");
	for (i = 0; i < stds; i++) {
		printf(" %5d %5d %5d %5d %5d %6.1f     %c\n", students[i].number, students[i].score[0], students[i].score[1], students[i].score[2], students[i].total, students[i].avg, students[i].grade);
	}
	for (i = 0; i < 45; i++) {
		printf("=");
	}
	printf("\n");
	printf("���:  ");
	for (int j = 0; j < 3; j++) {
		int total = 0;
		for (i = 0; i < stds; i++) {
			total += students[i].score[j];
		}
		printf("%5.1f", (double)total / (double)(stds));
	}
	printf("\n");
	printf("�ְ�:  ");
	for (int j = 0; j < 3; j++) {
		int max = 0;
		for (i = 0; i < stds; i++) {
			if (students[i].score[j] > max) {
				max = students[i].score[j];
			}
		}
		printf("%5d", max);
	}
	int max = 0;
	for (i = 0; i < stds; i++) {
		if (students[i].total > max) {
			max = students[i].total;
		}
	}
	printf("%5d", max);
	double max_double = 0.0;
	for (i = 0; i < stds; i++) {
		if (students[i].avg > max_double) {
			max_double = students[i].avg;
		}
	}
	printf("%5.1f", max_double);
	printf("\n");
	printf("����:  ");
	for (int j = 0; j < 3; j++) {
		int min = 100;
		for (i = 0; i < stds; i++) {
			if (students[i].score[j] < min) {
				min = students[i].score[j];
			}
		}
		printf("%5d", min);
	}
	int min = 10000;
	for (i = 0; i < stds; i++) {
		if (students[i].total < min) {
			min = students[i].total;
		}
	}
	printf("%5d", min);
	double min_double = 100.0;
	for (i = 0; i < stds; i++) {
		if (students[i].avg < min_double) {
			min_double = students[i].avg;
		}
	}
	printf("%5.1f", min_double);
	printf("\n");
	printf("�ƹ� ���ڳ� �����ÿ�!!");
	scanf("%d", &i);
	return 0;

}

int notscore(int score)
{
	if (score < 0 || score>100)
		return 1;
	else
		return 0;
}

char get_grade(double avg) {
	if (avg >= 90.0) {
		return 'A';
	}
	else if (avg >= 80.0) {
		return 'B';
	}
	else if (avg >= 70.0) {
		return 'C';
	}
	else if (avg >= 60.0) {
		return 'D';
	}
	else {
		return 'F';
	}
}