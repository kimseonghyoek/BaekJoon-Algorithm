#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b) {
		printf(">");
	}
	else if (a < b) {
		printf("<");
	}
	else if(a ==b) {
		printf("==");
	}

	return 0;
}