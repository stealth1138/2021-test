#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void YH(int n)
{
	int arr[30] = { 1 };
	printf("1\n");
	int j;
	for (int i = 1; i < n; i++)
	{
		for (j = i; j>0; j--)
		{
			arr[j] += arr[j - 1];
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	YH(n);
	system("pause");
	return 0;
}