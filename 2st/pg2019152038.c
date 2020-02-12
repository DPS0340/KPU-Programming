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
		//학생 이름 입력
		printf("학생이름 입력: ");
		fgets(buffer, 20, stdin);
		//Enter 만 입력했는지 확인
		buffer[strlen(buffer) - 1] = '\0';
		if (strcmp(buffer, "") == 0) {
			break;
		}
		// 구조체 하나 동적할당
		std[i] = (Student*)malloc(sizeof(Student));
		// 구조체의 name에 필요한 크기 만큼 동적할당
		std[i]->name = (char*)malloc(sizeof(char) * 15);
		// name에 입력된 이름 복사
		strcpy(std[i]->name, buffer);
		// grade에 입력된 평점 대입
		printf("학생성적 입력: ");
		scanf("%lf", &std[i]->grade);
		rewind(stdin);
		count = i + 1;
	}

	//여기에서 이름순으로 올림차순 sorting
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < i; j++) {
			if (strcmp(std[i]->name, std[j]->name) < 0) {
				swap(std[i], std[j]);
			}
		}
	}
	// 파일 open
	fp = fopen("Sorted.txt", "w");

	puts("-- 이름의 올림차순으로 정렬된 학생 --");
	fputs("-- 이름의 올림차순으로 정렬된 학생 --\n", fp);

	//소트 결과를 화면과 파일에 형식을 갖춰 출력
	for (int i = 0; i < count; i++) {
		printf("%15s %15.1lf\n", std[i]->name, std[i]->grade);
		fprintf(fp, "%15s %15.1lf\n", std[i]->name, std[i]->grade);
	}

	//여기에서 평점순으로 내림차순 sorting
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < i; j++) {
			if (std[i]->grade > std[j]->grade) {
				swap(std[i], std[j]);
			}
		}
	}

	puts("-- 평점의 내림차순으로 정렬된 학생 --");
	fputs("-- 평점의 내림차순으로 정렬된 학생 --\n", fp);

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