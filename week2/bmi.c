#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int kg;
	double cm;
	
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%d %lf", &kg, &cm);
	
	cm /= 100;
	
	double bmi = kg/cm*cm;
	
	if(20.0 <= bmi && bmi < 25.0) {
		printf("표준입니다.\n");
	} else {
		printf("체중관리가 필요합니다.\n");
	}
	
	return 0;
}
