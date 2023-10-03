#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int digits[10] = { 0 };
        int count = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digits[digit] == 0) {
                count++;
                digits[digit] = 1;
            }
            n /= 10;
        }

        printf("%d\n", count);
    }

    return 0;
}