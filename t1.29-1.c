#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int bottle = 0;
	int money = 0;
	int tmp = 0;
	scanf("%d", &money);
	bottle = money;
	tmp = money;
	while (tmp > 1)
	{
		bottle += tmp / 2;
		tmp = tmp / 2 + tmp % 2;
	}
	printf("ÄÜºÈµ½%dÆ¿ÆûË®\n", bottle);
	system("pause");
	return 0;
}