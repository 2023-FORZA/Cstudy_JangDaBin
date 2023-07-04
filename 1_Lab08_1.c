#include <stdio.h>

int main(void)
{
	int N;
	int count = 0;
	int x[50], y[50];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 0; i < N; i++)
	{
		count = 0;

		for (int j = 0; j < N; j++)
		{
			if (x[i] < x[j] && y[i] < y[j])
				count++;
		}
		printf("%d ", count + 1);
	}
}

