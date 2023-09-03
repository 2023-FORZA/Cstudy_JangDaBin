#include <stdio.h>

int main() {
	char a[101];
	scanf("%s", &a);

	int cnt = 0;
	int i = 0;

	while (a[i]) {
		if (a[i] == '=' || a[i] == '-') {
			++i;
		}
		else if ((a[i] == 'n' || a[i] == 'l') && a[i + 1] == 'j') {
			++cnt;
			i += 2;
		}
		else if (a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] == '=') {
			++cnt;
			i += 3;
		}
		else {
			++cnt;
			++i;
		}
	}

	printf("%d\n", cnt);
	return 0;
}
