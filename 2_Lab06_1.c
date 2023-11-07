#include <stdio.h>
#include <stdlib.h>
int main() {
	int num = 0, cnt = 1;
	int bar[100005] = { 0 };
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &bar[i]);
	}
	int top = bar[num - 1];
	for (int i = num - 1; i >= 0; i--) {
		if (bar[i] > top) {
			cnt++;
			top = bar[i];
		}
	}
	printf("%d", cnt);
}