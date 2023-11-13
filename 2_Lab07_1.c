#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main() {
	int i, j, n, k = 0;
	int arr[1001] = { 0 };
	int arr1[1001] = { 0 };
	int max = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int j = 0;
		scanf("%d", &j);
		arr[i] = j;
	}
	for (int i = 0; i < n; i++) {

		if (arr[i] < arr[i + 1]) {
			arr1[0] = arr[i];
			for (j = i; j < n; j++) {
				if (arr[j] < arr[j + 1]) {
					arr1[1] = arr[j + 1];
				}

				else
				{
					k = arr1[1] - arr1[0];
					if (max < k) {
						max = k;
					}

					break;
				}



			}


		}

	}

	printf("%d", max);
}