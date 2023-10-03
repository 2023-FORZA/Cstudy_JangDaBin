#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char line[1001];
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (line[0] == '*')
            break;

        int alphabet[26] = { 0 };


        for (int i = 0; line[i] != '\0'; i++) {
            char c = line[i];
            if ('a' <= c && c <= 'z') {
                alphabet[c - 'a']++;
            }
        }

        bool isPangram = true;

        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == 0) {
                isPangram = false;
                break;
            }
        }

        if (isPangram) {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }
    return 0;
}