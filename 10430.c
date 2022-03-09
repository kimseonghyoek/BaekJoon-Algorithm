#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a%c) + (b%c))%c);
	printf("%d\n", (a * b) % c);
	printf("%d", ((a%c) * (b%c))%c);

	return 0;
}