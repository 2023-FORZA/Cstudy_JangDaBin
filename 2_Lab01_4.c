#include <stdio.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    getchar();

    while (test_cases--) {
        char input[101];
        fgets(input, sizeof(input), stdin);
        int g_count = 0, G_count = 0;

        for (int i = 0; input[i] != '\0'; i++) {
            if (input[i] == 'g' || input[i] == 'G') {
                g_count++;
            }
            else if (input[i] == 'b' || input[i] == 'B') {
                G_count++;
            }
        }

        input[strlen(input) - 1] = '\0';

        printf("%s is %s\n", input, (g_count > G_count) ? "GOOD" : (g_count < G_count) ? "A BADDY" : "NEUTRAL");
    }

    return 0;
}