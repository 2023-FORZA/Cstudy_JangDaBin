#include <stdio.h>

int a, b;

int main(void) {
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf(">");
    }
    else if (a < b) {
        printf("<");
    }
    else {
        printf("==");
    }
}