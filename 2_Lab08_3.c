#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int vec[1000000];
    int idx = 0;

    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            vec[idx] = i;
            idx++;
        }
    }

    int sum = 0;

    for (int i = a - 1; i <= b - 1; i++) {
        sum += vec[i];
    }

    printf("%d\n", sum);
    return 0;
}