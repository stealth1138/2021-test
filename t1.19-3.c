#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int Dif(int i,int j)
{
	int tmp = i^j;
	int count = 0;
	while (tmp)
	{
		for (int n = 0; n < 32; n++)
		{
			if ((tmp >> n) & 1 == 1)
				count++;
		}
		break;
	}
	return count;
}

int main()
{
	int m, n;
	printf("��������Ҫ������������");
	scanf("%d %d", &m, &n);
	printf("���߶�������%dλ��ͬ\n", Dif(m, n));
	system("pause");
	return 0;
}