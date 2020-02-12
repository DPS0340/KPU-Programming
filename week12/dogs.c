#include <stdio.h>
#include <string.h>

void swap(char**, char**);

void bubbleSort(char* [], int);

int main(void) {
	char* dogs[] = { "poodle",  "maltese",  "shitzu",  "chihuahua",  "pomeranian",  "mixed",  "dachshund",  "shepherd" };

	int len = sizeof(dogs) / sizeof(dogs[0]);

	bubbleSort(dogs, len);

	for (int i = 0; i < len; i++) {
		printf("%s\n", dogs[i]);
	}
}

void swap(char** p1, char** p2) {
	char* temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	return;
}

void bubbleSort(char* arr[], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i; j++) {
			if (strcmp(arr[j], arr[i]) == 1) {
				swap(&arr[j], &arr[i]);
			}
		}
	}

	return;
}