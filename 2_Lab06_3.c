#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int sum = 0;
	int n = 0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	arr[0] = n / 10000;
	arr[1] = (n % 10000) / 1000;
	arr[2] = ((n % 10000) % 1000) / 100;
	arr[3] = (((n % 10000) % 1000) % 100) / 10;
	arr[4] = ((((n % 10000) % 1000) % 100) % 10);
	for (int i = 0; i < 5; i++) {
		sum += pow(arr[i], 5);

	}


	printf("%d", sum);

}