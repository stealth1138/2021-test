#include <stdio.h>
#include <stdlib.h>

union Data
{
	int i;
	char ch;
};

//��˷���0��С�˷���1
int BOS()
{
	union Data d;
	d.i = 0x00000001;//ʹ��d.i=1Ҳ��
	if (d.ch == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	printf("%d\n", BOS());
	system("pause");
	return 0;
}