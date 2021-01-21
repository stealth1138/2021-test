#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	for (int i = 1; i <= 9999; ++i)
	{
		int count = 0;
		int tmp = i;
		int sum = 0;
		while (tmp)
		{
			count++;
			tmp /= 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}