#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Turn(char* ch)
{
	char* left = ch;
	char* right = ch + strlen(ch) - 1;
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char a[] = "dlrow olleh";
	Turn(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}