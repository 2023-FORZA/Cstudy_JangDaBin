#include <stdio.h>

int binarySearch(int arr[], int target, int left, int right) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return 0;
}

void merge(int arr[], int left, int mid, int right) {
    int temp[1000001];
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int x = left; x <= right; x++) {
        arr[x] = temp[x];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        int note1[1000001], note2[1000001];

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &note1[i]);
        }

        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &note2[i]);
        }

        mergeSort(note1, 0, n - 1);

        for (int i = 0; i < m; i++) {
            printf("%d\n", binarySearch(note1, note2[i], 0, n - 1));
        }
    }

    return 0;
}


