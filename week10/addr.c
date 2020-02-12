#include <stdio.h>
#include <string.h>

// addr.c
// 2019152038 이지호
// 2019.11.05 작성

int main(void) {
	char city[200];
	char goo[200];
	
	printf("도시: ");
	gets(city);
	
	printf("구: ");
	gets(goo);
	
	strcat(city, " ");
	strcat(city, goo);
	
	printf("%s\n", city);
	
	return 0;
}
