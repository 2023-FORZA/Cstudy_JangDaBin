#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int solve(int n) { // ´çÃ· = 1, ¾Æ´Ï¸é 0
	int check[4] = { 3,2,0,2 };
	int index = 0;

	while (n > 0) {
		int k = n % 10;
		if (k == check[index]) index++;
		n /= 10;
		if (index == 4) return 1;
	}
	return 0;

}

int main() {
	int n, cnt = 0;
	scanf("%d", &n);

	if (n <= 2022) printf("0");
	else {
		for (int i = 2023; i <= n; i++) cnt += solve(i);
		printf("%d", cnt);
	}
}