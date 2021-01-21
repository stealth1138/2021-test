#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* p = a;
	for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
	{
		printf("%d ", *p);
		++p;
	}
	printf("\n");
	system("pause");
	return 0;
}