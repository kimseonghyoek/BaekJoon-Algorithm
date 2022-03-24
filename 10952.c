#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b = 0;
	int i = 0;
	while (i < 5) {
		scanf("%d %d", &a, &b);
		if (a, b == 0) {
			break;
		}
		printf("%d\n", a + b);
	}
}