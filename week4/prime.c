#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int k;
	
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &k);
	
	int* result = (int*)malloc(sizeof(int) * k);
	
	result[0] = 2;
	int index = 1;
	
	for(int i=3;i<=k;i++) {
		int prime = 1;
		for(int j=0;j<index;j++) {
			if(i % result[j] == 0) {
				prime = 0;
				break;
			}
		}
		if(prime) {
			result[index++] = i;
		}
	}
	
	for(int i=0;i<index;i++) {
		if(result[i] <= k) {
			printf("%d ", result[i]);
			if((i + 1 ) % 5 == 0) {
				printf("\n");
			}
		} else{
			break;
		}
	}
	return 0;
}
