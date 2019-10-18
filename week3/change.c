#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int price, pay;
	
	printf("음료값: ");
	scanf("%d", &price);
	
	printf("지불액: ");
	scanf("%d", &pay);
	
	pay -= price;
	
	int arr[4] = {500, 100, 50, 10};
	
	int res[4];
	
	for(int i=0;i<4;i++) {
		res[i] = pay / arr[i];
		pay %= arr[i];
		
		printf("%d원 동전: %d개\n", arr[i], res[i]);
	}
	
	return 0;
}
