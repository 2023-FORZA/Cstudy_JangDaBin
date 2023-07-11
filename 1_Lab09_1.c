#include<stdio.h>
#include<stdlib.h>

int main() {
	char* s1;
	s1 = (char*)malloc(sizeof(char) * 80);
	char s[100];
	int n;
	int array[100];
	int scoreArray[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a = 1;
		int number = 0;
		int score = 0;
		for (int i = 0; i < 80; i++) {
			array[i] = 0;
		}
		scanf("%s", s1);

		for (int i = 0; i < 80; i++) {
			s[i] = s1[i];
		}

		for (int i = 0; i < 80; i++) {
			if (s[i] != 'O' && s[i] != 'X')
				break;
			else if (s[i] == 'O') {
				score += a;
				a += 1;
			}
			else if (s[i] == 'X')
				a = 1;
		}
		scoreArray[i] = score;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", scoreArray[i]);
	free(s1);
}



