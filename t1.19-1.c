#include <stdio.h>
#include <stdlib.h>

void Papaw(int arr[],int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		int check = 0;
		for (int j = 0; j < size - i; ++j)
		{
			if (arr[j - 1]>arr[j])
			{
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
				check = 1;
			}
		}
		if (check = 0)
			return;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 8, 3, 2, 4, 1, 5, 6, 7, 0, 9 };
	Papaw(arr,10);
	printf("\n");
	system("pause");
	return 0;
}