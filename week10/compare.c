#include <stdio.h>

// compare.c
// 2019152038 이지호
// 2019.11.05 작성

int main(void) {
	char s1[200], s2[200];
	
	printf("input: ");
	gets(s1);
	printf("input: ");
	gets(s2);
	
	printf("길이순: %s\n", strlen(s1) > strlen(s2) ? s1 : s2);
	printf("알파벳순: %s\n", strcmp(s1, s2) ? s1 : s2);
	
	return 0;
}
