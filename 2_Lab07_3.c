#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char name[101];
    scanf("%s", name);

    int score = 0;
    for (int i = 0; i < N; i++) {
        if ('A' <= name[i] && name[i] <= 'Z') {
            score += name[i] - 'A' + 1;
        }
    }

    printf("%d\n", score);

    return 0;
}
