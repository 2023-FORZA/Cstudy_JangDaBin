#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int sticks = 0;

    int current_length = 64;
    while (X > 0) {
        if (current_length <= X) {
            X -= current_length; 
            sticks++; 
        }
        current_length /= 2; 
    }

    printf("%d\n", sticks);

    return 0;
}



