#include <stdio.h>


int main() {
    int n, res, x[10] = { 0 };
    scanf("%d", &n);

    for (int i = n; i > 0; i /= 10) { x[i % 10]++; }

    res = (x[6] + x[9]) % 2 + (x[6] + x[9]) / 2;

    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9) { if (x[i] > res) { res = x[i]; } }
    }

    if (res == 0) { res = 1; }
    printf("%d", res);

}
