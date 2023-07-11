#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    char* arr = (char*)malloc(sizeof(char) * (n + 1));
    scanf("%s", arr);

    for (int i = 0; i < n; i++) {
        sum += (arr[i] - '0');
    }

    printf("%d", sum);
    free(arr);
    return 0;
}
