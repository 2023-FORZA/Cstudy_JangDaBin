#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int man[10000];
	for (int i = 0; i < n; i++)
	{
		int num[10] = { 0 };
		int arr[10];

		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[j]);
			num[arr[j]]++;
		}

		int swit = 0;
		int one = 0;

		for (int k = 1; k < 7; k++)
		{
			if (num[k] == 4)
			{
				man[i] = 50000 + (k * 5000);
				break;
			}

			if (num[k] == 3)
			{
				man[i] = 10000 + (k * 1000);
				break;
			}


			int cnt = 0;
			for (int q = 1; q < 7; q++)
			{
				if (num[k] != 2) break;

				if (k == q) continue;

				if (num[q] == 2)
				{
					man[i] = 2000 + (k * 500) + (q * 500);
					swit = 1;
					break;
				}
				else if (num[q] != 2)
					cnt++;
			}

			if (swit == 1) break;

			if (cnt == 5)
			{
				man[i] = 1000 + (k * 100);
				break;
			}

			if (num[k] == 1)
				one++;
		}

		if (one == 4)
		{
			for (int o = 6; o > 0; o--)
			{
				if (num[o] != 0)
				{
					man[i] = o * 100;
					break;
				}
			}
		}

	}


	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < man[i]) max = man[i];
	}

	printf("%d", max);
	return 0;
}
