#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int);

int main(void) {
	int k;
	
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &k);
	
	for(int i=2;i<=k;i++) {
		if(isprime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}

int isprime(int x) {
	for(int i=2;i*i<=x;i++) {
		if(x % i == 0) {
			return 0;
		}
	}
	return 1;
}
