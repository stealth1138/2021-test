#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,n;
	printf("��������Ҫ��������֣�");
	scanf("%d", &a);
	printf("��������Ҫ����Ĵ�����");
	scanf("%d", &n);
	int tmp = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		tmp = a + tmp * 10;
		sum += tmp;
	}
	printf("����ǣ�%d\n", sum);
	system("pause");
	return 0;
}