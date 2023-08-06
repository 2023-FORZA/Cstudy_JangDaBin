#include <stdio.h>

int main() {
    int original, num, cycle = 0;

    scanf("%d", &original);
    num = original;

    do {
        int tens = num / 10;
        int units = num % 10;
        int sum = tens + units;

        num = units * 10 + sum % 10;

        cycle++;
    } while (num != original);

    printf("%d\n", cycle);

    return 0;
}
