#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k = 0;
	scanf("%d", &n);
	int time = 0;



	while (1) {
		k++;
		if (n == 0) break;
		if (n < k) k = 1;
		n -= k;
		time++;
	}
	printf("%d", time);
	return 0;
}