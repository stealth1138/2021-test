#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,n;
	printf("请输入需要计算的数字：");
	scanf("%d", &a);
	printf("请输入需要计算的次数：");
	scanf("%d", &n);
	int tmp = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		tmp = a + tmp * 10;
		sum += tmp;
	}
	printf("结果是：%d\n", sum);
	system("pause");
	return 0;
}