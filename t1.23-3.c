#include <stdio.h>
#include <stdlib.h>

union Data
{
	int i;
	char ch;
};

//大端返回0，小端返回1
int BOS()
{
	union Data d;
	d.i = 0x00000001;//使用d.i=1也可
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