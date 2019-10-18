#include <stdio.h>

int main() {
	unsigned long long int n = ((unsigned long long int)1 << 32) - 1; // 비트 연산

	printf("%lld\n", n); // 큰 정수 출력
	printf("%llo\n", n);
	printf("%llx\n", n);

	return 0; // 프로그램 종료
}