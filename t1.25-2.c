#include <stdio.h>
#include <stdlib.h>

int j = 0;

int removeDuplicates(int*nums, int numssize)
{
	int n = numssize;
	for (int i = 0; i < n; i++)
	{
		if (nums[i] != nums[j])
		{
			nums[++j] = nums[i];
		}
	}
	return ++j;
}

int main()
{
	int num[] = { 1, 2, 2, 3 };
	removeDuplicates(num, 4);
	printf("新的数组长度为：%d\n", j);
	for (int i = 0; i < j; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}