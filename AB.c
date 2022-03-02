#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double a = 0;
	double b = 0;

	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("%.13lf", a / b);
	
	return 0;
}