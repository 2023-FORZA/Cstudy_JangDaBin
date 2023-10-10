#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	while (1) {
		int i, j, n, count = 0;
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		int arr[100] = { 0 };


		for (i = 0; i < n; i++) {

			scanf("%d", &j);
			arr[i] = j;

		}

		int ay[100] = { 0 };

		for (int k = 0; k < n; k++) {

			if (arr[k] != arr[k + 1]) {
				ay[count] = arr[k];
				count++;
			}
		}


		for (int h = 0; h != count; h++) {
			printf("%d ", ay[h]);

		}
		printf("$\n");


	}


}
