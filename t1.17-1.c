#include <stdio.h>
#include <stdlib.h>

int BOS()
{
	int val = 1;//定义一个变量为1，此时十六进制为0x00000001
	char ch = val;//类型转换
	if (ch)//在小端机中存储为0x01 00 00 00，前两位为01则返回1，代表小端机
	{
		return 1;
	}
	else//大端机中存储为0x00 00 00 01,前两位为00，返回0
	{
		return 0;
	}
}

int main()
{
	if (BOS())//判断结果返回的是1还是0，若1便进if，若0便进else
	{
		printf("该机器是小端机\n");
	}
	else
	{
		printf("该机器是大端机\n");
	}
	system("pause");
}