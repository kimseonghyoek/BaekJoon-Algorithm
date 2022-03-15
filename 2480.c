#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c && a == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b || b == c) {
		printf("%d", 1000 + b * 100);
	}
	else if (a == c) {
		printf("%d", 1000 + a * 100);
	}
	else {
		if (a > b) {
			printf("%d", a * 100);
		}
		else if (c > b) {
			printf("%d", c * 100);
		}
		else {
			printf("%d", b * 100);
		}
	}

	return 0;
}