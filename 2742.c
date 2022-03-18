#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 0;
	scanf("%d", &input);
	int sum = input;
	for (int i = 1; i <= input; i++) {
		printf("%d\n", sum);
		sum--;
	}
	return 0;
}