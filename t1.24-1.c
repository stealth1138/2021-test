#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
	int num[N] = { 1, 2, 3, 4, 6, 7, 8, 9, 10 };
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i <= N; i++)
	{
		sum1 += i;
	}
	for (int i = 0; i < N; i++)
	{
		sum2 += num[i];
	}
	printf("È±Ê§µÄÊı×ÖÊÇ:%d\n", sum1 - sum2);
	system("pause");
	return 0;
}