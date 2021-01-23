#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//因为是void,所以针对的是任意类型
//size_t就是typedef后的unsigned int无符号整形
void* my_memcpy(void* n, const void* m, size_t size)
{
	char* ch_n = (char*)n;
	const char* ch_m = (const char*)m;
	for (size_t i = 0; i < size; i++)
	{
		ch_n[i] = ch_m[i];
		//ch_m[i]等价于*(ch_m+i)
	}
}

int main()
{
	char a1[10];
	char a2[] = "hello";
	my_memcpy(a1, a2, sizeof(a2));
	printf("a1转换后输出:%s\n", a1);

	int b1[10];
	int b2[] = { 1, 2, 3, 4, 5 };
	my_memcpy(b1, b2, sizeof(b2));
	printf("b1转换后输出：");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b1[i]);
	}
	printf("\n");

	double c1[5];
	double c2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	my_memcpy(c1, c2, sizeof(c2));
	printf("c1转换后输出：");
	for (int i = 0; i < 5; i++)
	{
		printf("%lf ", c1[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}