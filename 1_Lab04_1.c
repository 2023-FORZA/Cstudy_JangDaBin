#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int a = 1; a <= 9; a++) {
        printf("%d * %d = %d\n", N, a, a * N);
    }


    return 0;
}