#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input, a, b = 0;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++) {
		scanf("%d %d", &a, &b);
		if (0 < a && b < 10) {
			printf("Case #%d: %d\n", i, a + b);
		}
	}

	return 0;
}