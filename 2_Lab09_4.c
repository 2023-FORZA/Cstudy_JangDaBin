#include <stdio.h>

int total[3], count[3][4], num, max, who, max_count, who_max[3];

void input();
int WHO(int a, int b);

int main() {
    input();

    max = total[0] > total[1] ? total[0] : total[1];
    max = max > total[2] ? max : total[2];

    for (int i = 0; i < 3; i++) {
        if (max == total[i]) {
            who_max[max_count] = i;
            max_count++;
            count[i][3] = max;
        }
    }

    if (max_count == 1) {
        who = who_max[0];
    }
    else if (max_count == 2) {
        who = WHO(who_max[0], who_max[1]);
    }
    else if (max_count == 3) {
        who = WHO(who_max[0], who_max[1]);
        if (who == -1) {
            who = WHO(who_max[0], who_max[2]);
        }
        else {
            who = WHO(who, who_max[2]);
        }
    }

    if (who != -1) {
        printf("%d %d", who + 1, max);
        return 0;
    }
    printf("0 %d", max);
    return 0;
}

int WHO(int a, int b) {
    int result = -1;
    for (int i = 2; i >= 0; i--) {
        if (count[a][i] == count[b][i]) {
            result = -1;
        }
        else {
            result = count[a][i] < count[b][i] ? b : a;
        }
        if (result != -1) {
            return result;
        }
    }
    return result;
}

void input() {
    scanf("%d", &num);
    while (num--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        total[0] += a;
        total[1] += b;
        total[2] += c;
        count[0][a - 1]++;
        count[1][b - 1]++;
        count[2][c - 1]++;
    }
}
