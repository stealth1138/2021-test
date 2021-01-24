//һ���������� nums �����������֮�⣬�������ֶ����������Ρ�
//��д�����ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ�临�Ӷ���O(n)���ռ临�Ӷ���O(1)��

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
	printf("�������ǣ�%d %d\n", a, b);
	system("pause");
	return 0;
}