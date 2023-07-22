#include <stdio.h>
#include <string.h>

int main() {
    char king[3], stone[3];
    int n;

    scanf("%s %s", king, stone);

    scanf("%d", &n);

    while (n--) {
        char command[3];
        scanf("%s", command);

        int kingX = king[0] - 'A';
        int kingY = king[1] - '1';
        int stoneX = stone[0] - 'A';
        int stoneY = stone[1] - '1';

        int moveX = 0, moveY = 0;

        if (strcmp(command, "R") == 0) moveX = 1;
        else if (strcmp(command, "L") == 0) moveX = -1;
        else if (strcmp(command, "B") == 0) moveY = -1;
        else if (strcmp(command, "T") == 0) moveY = 1;
        else if (strcmp(command, "RT") == 0) { moveX = 1; moveY = 1; }
        else if (strcmp(command, "LT") == 0) { moveX = -1; moveY = 1; }
        else if (strcmp(command, "RB") == 0) { moveX = 1; moveY = -1; }
        else if (strcmp(command, "LB") == 0) { moveX = -1; moveY = -1; }

        int newKingX = kingX + moveX;
        int newKingY = kingY + moveY;

        if (newKingX < 0 || newKingX >= 8 || newKingY < 0 || newKingY >= 8) continue;

        if (newKingX == stoneX && newKingY == stoneY) {
            int newStoneX = stoneX + moveX;
            int newStoneY = stoneY + moveY;

            if (newStoneX < 0 || newStoneX >= 8 || newStoneY < 0 || newStoneY >= 8) continue;

            if (newStoneX == kingX && newStoneY == kingY) continue;

            stone[0] = newStoneX + 'A';
            stone[1] = newStoneY + '1';
        }

        king[0] = newKingX + 'A';
        king[1] = newKingY + '1';
    }

    printf("%s\n%s\n", king, stone);

    return 0;
}



