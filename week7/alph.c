#include <stdio.h>
#include <string.h>

int uncapitalize(char* s, int len) {
	int res = 0;
	for(int i=0;i<len;i++) {
		if('A' <= s[i] && s[i] <= 'Z') {
			s[i] -= 'A';
			s[i] += 'a';
			res++;
		}
	}
	return res;
}

int main(void) {
	char s[100];
	
	printf("문장 입력 : ");
	gets(s);
	
	int count = uncapitalize(s, strlen(s));
	printf("바뀐 문장 : %s\n", s);
	printf("바뀐 문자 수 : %d\n", count);
	
	return 0;
}
