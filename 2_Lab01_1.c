#include <stdio.h>

int main() {
    int L, N;
    scanf("%d", &L);
    scanf("%d", &N);

    int rollCake[1001] = { 0 };
    int maxExpect = -1;
    int maxReal = -1;
    int maxExpectCnt = -1;
    int maxRealCnt = -1;

    for (int i = 1; i <= N; i++) {
        int P, K;
        scanf("%d %d", &P, &K);

        int expectCnt = K - P + 1;

        if (expectCnt > maxExpectCnt) {
            maxExpectCnt = expectCnt;
            maxExpect = i;
        }

        for (int j = P; j <= K; j++) {
            if (rollCake[j] == 0) {
                rollCake[j] = i;
            }
        }
    }

    int participantCnt[1001] = { 0 };

    for (int i = 1; i <= L; i++) {
        int participant = rollCake[i];
        if (participant > 0) {
            participantCnt[participant]++;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (participantCnt[i] > maxRealCnt) {
            maxRealCnt = participantCnt[i];
            maxReal = i;
        }
    }

    printf("%d\n%d\n", maxExpect, maxReal);
    return 0;
}