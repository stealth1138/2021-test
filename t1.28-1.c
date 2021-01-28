#include <stdio.h>
#include <stdlib.h>

void Trim(int arr[],int size)
{
	int left = 0;
	int right = size - 1;
	int tmp = 0;

	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	Trim(a, sizeof(a) / 4);
	for (int i = 0; i < sizeof(a) / 4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}