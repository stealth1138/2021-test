#include <stdio.h>
#include <stdlib.h>

void rotate(int* nums, int numsSize, int k)
{
	int i = 0;
	int n = numsSize;
	k %= numsSize;
	//��k=mumsSize����Ҫ�䶯
	if (k == 0)
	{
		return;
	}
	//�������λ��
	for (i = 0; i < n / 2; i++)
	{
		nums[i] = nums[i] + nums[n - 1 - i];
		nums[n - 1 - i] = nums[i] - nums[n - 1 - i];
		nums[i] = nums[i] - nums[n - 1 - i];
	}
	//��k�����ٵ���λ��
	for (i = 0; i < k / 2; i++)
	{
		nums[i] = nums[i] + nums[k - 1 - i];
		nums[k - 1 - i] = nums[i] - nums[k - 1 - i];
		nums[i] = nums[i] - nums[k - 1 - i];
	}
	//��ʣ�µ�������λ��
	for (i = k; i < (n + k) / 2; i++)
	{
		nums[i] = nums[i] + nums[n + k - 1 - i];
		nums[n + k - 1 - i] = nums[i] - nums[n + k - 1 - i];
		nums[i] = nums[i] - nums[n + k - 1 - i];
	}
}

int main()
{
	int nums[] = { 1, 2, 3, 4, 5 };
	int k = 3;
	rotate(nums, sizeof(nums) / 4, 3);
	for (int i = 0; i < sizeof(nums) / 4; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}