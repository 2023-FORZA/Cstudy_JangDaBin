#include <stdio.h>

void insertionSort(int d[], int size);
void findDwarf(int d[], int size);

int main(void)
{
    int dwarf[9];
    int i, n = 9;

    for (i = 0; i < n; i++)
        scanf("%d", &dwarf[i]);

    insertionSort(dwarf, n);

    findDwarf(dwarf, n);

    return 0;
}

void insertionSort(int d[], int size)
{
    int i, j, key;

    for (i = 1; i < size; i++) {
        key = d[i];
        for (j = i - 1; j >= 0 && d[j] > key; j--) {
            d[j + 1] = d[j];
        }
        d[j + 1] = key;
    }
}

void findDwarf(int d[], int size)
{
    int i, j, k;
    int temp, sum = 0;

    for (i = 0; i < size; i++)
        sum += d[i];

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            temp = sum - (d[i] + d[j]);

            if (temp == 100) {
                for (k = 0; k < size; k++) {
                    if (k != i && k != j)
                        printf("%d\n", d[k]);
                }
                return;
            }
        }
    }
}
