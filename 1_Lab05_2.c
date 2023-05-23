#include<stdio.h>
int main() {
    int n, v;
    int sum = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &v);
    for (int j = 0; j < n; j++) {
        if (v == a[j])
            sum++;
    }
    printf("%d", sum);
}