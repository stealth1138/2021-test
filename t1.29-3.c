#include <stdio.h>
#include <stdlib.h>

int main()
{
	int killer[4] = { 0 };
	int i;
	for (i = 0; i < 4; i++)
	{
		killer[i] = 1;
		if ((killer[0] != 1) + (killer[2] == 1) + (killer[3] == 1) + (killer[3] != 1) == 3)
		{
			break;
		}
		else
		{
			killer[i] = 0;
		}
	}
	putchar('A' + i);
	printf("\n");
	system("pause");
	return 0;
}