#include <stdio.h>
#include <string.h>

// swap.c
// 2019152038 이지호
// 2019.11.05 작성

void cpy(char* s1, char* s2) {
	while(*s1++ = *s2++);
}

void swap_charr(char* s1, char* s2) {
	char temp[80];
	cpy(temp, s1);
	cpy(s1, s2);
	cpy(s2, temp);
	
	return;
}

void swap_charp(char** s1, char** s2) {
	char** temp;
	*temp = *s1;
	*s1 = *s2;
	*s2 = *temp;
	
	return;
}

int main(void) {
	char str1[80] = "banana";
	char str2[80] = "apple";
	char* ps1 = "cat";
	char* ps2 = "dog";
	
	swap_charr(str1, str2);
	swap_charp(&ps1, &ps2);
	
	printf("str1: %s, str2: %s\n", str1, str2);
	printf("ps1: %s, ps2: %s\n", ps1, ps2);
	
	return 0;
}
