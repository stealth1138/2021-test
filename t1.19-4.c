#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void Sex(int n)
{
	printf("奇数位排列为：");
	for (int i = 31; i > 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");

	printf("偶数位排列为：");
	for (int j = 32; j > 0; j -= 2)
	{
		printf("%d ", (n >> j) & 1);
	}
	printf("\n");
}

int main()
{
	int n;
	printf("请输入需要检视的数：");
	scanf("%d", &n);
	Sex(n);
	system("pause");
	return 0;
}