#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1 = 0;
	int n2 = 0;

	scanf("%d", &n1);
	scanf("%d", &n2);

	int n3 = n1 * (n2 % 10);
	int n4 = n1 * (n2 / 10 % 10);
	int n5 = n1 * (n2 / 100);

	printf("%d\n", n3);
	printf("%d\n", n4);
	printf("%d\n", n5);
	printf("%d", (n1 * n2));

	return 0;
}