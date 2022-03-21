#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 0;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++) {
		for (int j = 0; j < input - i; j++) {
			printf(" ");
		}

		for (int a = 0; a < i; a++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}