#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 0;
	int sum = 0;
	scanf("%d", &input);
	for (int i = 0; i <= input; i++) {
		sum += i;
	}
	printf("%d", sum);
}