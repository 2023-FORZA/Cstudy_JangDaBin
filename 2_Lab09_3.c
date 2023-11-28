#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main() {
	int n = 0;
	int a = 0;
	char arr[81] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &a, arr);



		for (int k = 0; k < strlen(arr); k++) {
			if (k == a - 1)
				continue;
			printf("%c", arr[k]);
		}
		printf("\n");


	}

}
