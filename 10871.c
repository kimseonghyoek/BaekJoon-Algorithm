#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, b, input;

    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++) {
        scanf("%d", &input);

        if (b > input)
            printf("%d ", input);
    }
}