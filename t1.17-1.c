#include <stdio.h>
#include <stdlib.h>

int BOS()
{
	int val = 1;//����һ������Ϊ1����ʱʮ������Ϊ0x00000001
	char ch = val;//����ת��
	if (ch)//��С�˻��д洢Ϊ0x01 00 00 00��ǰ��λΪ01�򷵻�1������С�˻�
	{
		return 1;
	}
	else//��˻��д洢Ϊ0x00 00 00 01,ǰ��λΪ00������0
	{
		return 0;
	}
}

int main()
{
	if (BOS())//�жϽ�����ص���1����0����1���if����0���else
	{
		printf("�û�����С�˻�\n");
	}
	else
	{
		printf("�û����Ǵ�˻�\n");
	}
	system("pause");
}