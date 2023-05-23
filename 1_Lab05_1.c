#include<stdio.h>

int main() {
	int num, x = 1, i, t = 0;
	for (i = 1; i <= 9; i++) {
		scanf("%d", &num);
		if (num > x) x = num, t = i;
	}
	printf("%d\n%d\n", x, t);
	return 0;
}