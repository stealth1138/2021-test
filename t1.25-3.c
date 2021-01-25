#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int n, int* nums2, int m)
{
	int last = m + n - 1;
	int i = n - 1, j = m - 1;
	while (nums1[i] >= 0 && nums2[j] >= 0)
	{
		nums1[last--] = nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
	}
}

int main()
{
	int num1[] = { 1, 2, 3, 0, 0};
	int num2[] = { 4, 5 };
	int n = 3;
	int m = 2;
	merge(num1, n, num2, m);
	for (int i = 0; i < n + m; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}