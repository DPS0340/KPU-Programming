#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
	char* name;
	double grade;
};
typedef struct student Student;

void swap(Student*, Student*);

int main()
{
	Student* std[10] = { 0 };
	FILE* fp;
	char buffer[80];
	int count;

	for (int i = 0; i < 10; i++) {
		//�л� �̸� �Է�
		printf("�л��̸� �Է�: ");
		fgets(buffer, 20, stdin);
		//Enter �� �Է��ߴ��� Ȯ��
		buffer[strlen(buffer) - 1] = '\0';
		if (strcmp(buffer, "") == 0) {
			break;
		}
		// ����ü �ϳ� �����Ҵ�
		std[i] = (Student*)malloc(sizeof(Student));
		// ����ü�� name�� �ʿ��� ũ�� ��ŭ �����Ҵ�
		std[i]->name = (char*)malloc(sizeof(char) * 15);
		// name�� �Էµ� �̸� ����
		strcpy(std[i]->name, buffer);
		// grade�� �Էµ� ���� ����
		printf("�л����� �Է�: ");
		scanf("%lf", &std[i]->grade);
		rewind(stdin);
		count = i + 1;
	}

	//���⿡�� �̸������� �ø����� sorting
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < i; j++) {
			if (strcmp(std[i]->name, std[j]->name) < 0) {
				swap(std[i], std[j]);
			}
		}
	}
	// ���� open
	fp = fopen("Sorted.txt", "w");

	puts("-- �̸��� �ø��������� ���ĵ� �л� --");
	fputs("-- �̸��� �ø��������� ���ĵ� �л� --\n", fp);

	//��Ʈ ����� ȭ��� ���Ͽ� ������ ���� ���
	for (int i = 0; i < count; i++) {
		printf("%15s %15.1lf\n", std[i]->name, std[i]->grade);
		fprintf(fp, "%15s %15.1lf\n", std[i]->name, std[i]->grade);
	}

	//���⿡�� ���������� �������� sorting
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < i; j++) {
			if (std[i]->grade > std[j]->grade) {
				swap(std[i], std[j]);
			}
		}
	}

	puts("-- ������ ������������ ���ĵ� �л� --");
	fputs("-- ������ ������������ ���ĵ� �л� --\n", fp);

	for (int i = 0; i < count; i++) {
		printf("%15s %15.1lf\n", std[i]->name, std[i]->grade);
		fprintf(fp, "%15s %15.1lf\n", std[i]->name, std[i]->grade);
	}

	return 0;
}

void swap(Student* s, Student* t) {
	Student temp = *s;
	*s = *t;
	*t = temp;

	return;
}