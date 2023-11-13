#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, M, L;
    scanf("%d %d %d", &N, &M, &L);

    int players[N];
    for (int i = 0; i < N; i++) {
        players[i] = 0;
    }

    int count = 0;
    int current_player = 0;

    while (1) {
        players[current_player]++;
        if (players[current_player] == M) {
            break;
        }

        if (players[current_player] % 2 == 1) {
            current_player = (current_player + L) % N;
        }
        else {
            current_player = (current_player - L + N) % N;
        }

        count++;
    }

    printf("%d\n", count);

    return 0;
}
