#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int num) {
    int reversed = 0;
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return num == reversed;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int num;
        scanf("%d", &num);

        int reversed_num = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            reversed_num = reversed_num * 10 + digit;
            temp /= 10;
        }

        int sum = num + reversed_num;

        if (is_palindrome(sum)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
