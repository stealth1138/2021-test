//一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。
//请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
	int num[N] = { 1, 4, 3, 1, 3, 5, 7, 5, 9, 9 };
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum ^= num[i];
	}
	int key = sum - (sum&(sum - 1));
	int a = 0, b = 0;
	for (int i = 0; i < N; i++)
	{
		if ((num[i] ^ key)>num[i])
		{
			a ^= num[i];
		}
		else
		{
			b ^= num[i];
		}
	}
	printf("两个数是：%d %d\n", a, b);
	system("pause");
	return 0;
}