#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* my_memmove(void* n, const void* m, size_t size)
{
	char* ch_n = (char*)n;
	const char* ch_m = (const char*)m;
	if (ch_n >= ch_m&&ch_n <= ch_m + size)
	{
		//从后往前拷贝
		for (int i = size - 1; i >= 0; i--)
		{
			//由于下标是从0开始的，所以i需要-1
			ch_n[i] = ch_m[i];
		}
	}
	else
	{
		//从前往后拷
		for (size_t i = 0; i < size; i++)
		{
			ch_n[i] = ch_m[i];
		}
	}
	return n;
}

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 0, 0, 0, 0, 0 };
	my_memmove(a +4, a, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}