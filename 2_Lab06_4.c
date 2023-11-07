#include <stdio.h>

int main() {
    char input[11];
    scanf("%s", input);

    int left_sum = 0;
    int right_sum = 0;

    int i = 0;
    while (input[i] != '\0') {
        if (i < (int)(strlen(input) / 2)) {
            left_sum += input[i] - '0';
        }
        else {
            right_sum += input[i] - '0';
        }
        i++;
    }

    if (left_sum == right_sum) {
        printf("LUCKY\n");
    }
    else {
        printf("READY\n");
    }

    return 0;
}