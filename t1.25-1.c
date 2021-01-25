#include <stdio.h>
#include <stdlib.h>

int n = 0;

int removeElement(int* nums, int numsSize, int val)
{
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[n++] = nums[i];
		}
	}
	return n;
}

int main()
{
	int num[] = { 1, 2, 2, 3 };
	int val = 3;
	removeElement(num, 4, val);
	printf("新的数组长度为：%d\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}