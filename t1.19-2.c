#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int Checknum(unsigned int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)
			count++;
	}
	return count;
}

int main()
{
	int i;
	printf("������Ҫ������:");
	scanf("%d", &i);
	printf("������%d��1\n", Checknum(i));
	system("pause");
	return 0;
}