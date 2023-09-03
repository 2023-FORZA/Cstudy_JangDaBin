#include<stdio.h>

int main(void) {
	int k;
	scanf("%d", &k);
	int count = 0;
	int N = 1000 - k;

	while (1) {
		while (N >= 500) {
			N = N - 500;
			count++;
		}
		while (N >= 100) {
			N = N - 100;
			count++;
		}
		while (N >= 50) {
			N = N - 50;
			count++;
		}
		while (N >= 10) {
			N = N - 10;
			count++;
		}
		while (N >= 5) {
			N = N - 5;
			count++;
		}
		while (N >= 1) {
			N = N - 1;
			count++;
		}
		break;
	}
	printf("%d", count);

	return 0;
}


