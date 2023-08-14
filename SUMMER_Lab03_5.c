#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int result;
    int N, K, num;

    for (int i = 0; i < T; i++)
    {
        result = 0;

        scanf("%d %d", &N, &K);

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &num);

            result += num / K;
        }

        printf("%d\n", result);
    }

    return 0;
}

