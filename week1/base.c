#include <stdio.h>

int main() {
	unsigned long long int n = ((unsigned long long int)1 << 32) - 1; // ��Ʈ ����

	printf("%lld\n", n); // ū ���� ���
	printf("%llo\n", n);
	printf("%llx\n", n);

	return 0; // ���α׷� ����
}