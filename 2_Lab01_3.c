#include <stdio.h>  
#include <stdlib.h>

int compare(void* first, void* second)
{
	int* a = first;
	int* b = second;
	if (*a > *b)
		return -1;
	else if (*a < *b)
		return 1;
	else
		return 0;
}


int main()
{
	int n;
	scanf("%d", &n);

	int num1;
	scanf("%d", &num1);

	int max = 0, arr[50];
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &arr[i]);
	}

	int cnt = 0;
	while (1)
	{
		qsort(arr, n - 1, sizeof(int), compare);

		if (num1 > arr[0])
			break;

		num1 += 1;
		arr[0] -= 1;
		cnt++;
	}
	printf("%d", cnt);


	return 0;
}