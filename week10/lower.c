#include <stdio.h>
#include <string.h>

// lower.c
// 2019152038 이지호
// 2019.11.05 작성

void toLower(char* str, int len) {
	for(int i=0;i<len;i++) {
		if('A' <= str[i] && str[i] <= 'Z') {
			str[i] += 'a' - 'A';
		}
	}
	return;
}

int main(void) {
	char s[200];
	printf("input: ");
	
	gets(s);
	toLower(s, strlen(s));
	printf("%s\n", s);
	
	return 0;
}
