#include <stdio.h>

void printJBox(int n)
{
    if (n == 1)
    {
        printf("#\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");

    for (int i = 0; i < n - 2; i++)
    {
        printf("#");

        for (int j = 0; j < n - 2; j++)
        {
            printf("J");
        }

        printf("#\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int n;
        scanf("%d", &n);

        printJBox(n);

        if (t < T - 1)
        {
            printf("\n");
        }
    }

    return 0;
}

