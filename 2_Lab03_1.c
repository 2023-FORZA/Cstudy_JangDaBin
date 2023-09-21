#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main1(char str[]) {
	if (!strcmp(str, "black"))return 0;
	else if (!strcmp(str, "brown"))return 1;
	else if (!strcmp(str, "red"))return 2;
	else if (!strcmp(str, "orange"))return 3;
	else if (!strcmp(str, "yellow"))return 4;
	else if (!strcmp(str, "green"))return 5;
	else if (!strcmp(str, "blue"))return 6;
	else if (!strcmp(str, "violet"))return 7;
	else if (!strcmp(str, "grey"))return 8;
	else if (!strcmp(str, "white"))return 9;
}

int main2(char str[]) {
	if (!strcmp(str, "black"))return 1;
	else if (!strcmp(str, "brown"))return 10;
	else if (!strcmp(str, "red"))return 100;
	else if (!strcmp(str, "orange"))return 1000;
	else if (!strcmp(str, "yellow"))return 10000;
	else if (!strcmp(str, "green"))return 100000;
	else if (!strcmp(str, "blue"))return 1000000;
	else if (!strcmp(str, "violet"))return 10000000;
	else if (!strcmp(str, "grey"))return 100000000;
	else if (!strcmp(str, "white"))return 1000000000;
}

int main() {
	char a[100], b[100], c[100];
	//scanf_s("%s %s %s", a, b, c);
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);

	long long result = 0;
	result += main1(a);
	result = result * 10 + main1(b);

	result *= main2(c);
	printf("%lld", result);
}
