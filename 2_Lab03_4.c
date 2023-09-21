#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int w[10], k[10];


    for (int i = 0; i < 10; i++) {
        scanf("%d", &w[i]);
    }


    for (int i = 0; i < 10; i++) {
        scanf("%d", &k[i]);
    }

    qsort(w, 10, sizeof(int), compare);
    qsort(k, 10, sizeof(int), compare);

    int w_sum = 0, k_sum = 0;

    for (int i = 0; i < 3; i++) {
        w_sum += w[i];
        k_sum += k[i];
    }

    printf("%d %d\n", w_sum, k_sum);

    return 0;
}
