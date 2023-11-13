#include <stdio.h>

int main() {
    int N, x, y, result = 0;

    scanf("%d", &N);
    scanf("%d %d", &x, &y);

    if (N == 1) {
        result = 0;
    }
    else if (x == 1 && y == 1 || x == 1 && y == N || x == N && y == 1 || x == N && y == N) {
        result = 2;
    }
    else if (x == 1 || x == N || y == 1 || y == N) {
        result = 3;
    }
    else {
        result = 4;
    }

    printf("%d", result);

    return 0;
}