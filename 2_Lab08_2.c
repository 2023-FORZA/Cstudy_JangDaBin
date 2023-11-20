#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

	while (1) {
		int arr[100001] = { 0 };
		int n = 0;
		int div = 1;
		int temp = 0;
		int count = 0;

		scanf("%d", &n);
		if (n == -1)
			break;
		for (div = 1; div < n; div++) {
			if (n % div == 0) {
				arr[count++] = div;
			}
		}

		int sum = 0;
		for (int i = 0; arr[i] != 0; i++) {
			sum += arr[i];
		}

		if (sum == n) { 
			printf("%d = 1 ", n);
			for (int i = 1; arr[i] != 0; i++)
				printf("+ %d ", arr[i]);
		}
		else
			printf("%d is NOT perfect.", n);
		printf("\n");
	}
}