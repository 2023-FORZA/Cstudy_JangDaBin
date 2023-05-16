#include<stdio.h>

int main()
{
	int n, i, k = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		k += i;
    }
	printf("%d", k);

	return 0;
}