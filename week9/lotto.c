#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void) {
	int lotto_nums[6];
	
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	
	return 0;
}

void input_nums(int* lotto_nums) {
	for(int i=0;i<6;i++) {
		int t;
		
		printf("번호 입력 : ");
		scanf("%d", &t);
		
		int dup = 0;
		
		for(int j=0;j<i;j++) {
			if(t == lotto_nums[j]) {
				dup = 1;
				break;
			}
		}
		
		if(dup) {
			printf("같은 번호가 있습니다!\n");
			i--;
			continue;
		} else {
			lotto_nums[i] = t;
			continue;
		}
	}
	return;
}

void print_nums(int* lotto_nums) {
	printf("로또 번호: ");
	for(int i=0;i<6;i++) {
		printf("%d ", lotto_nums[i]);
	}
	return;
}