int* addToArrayForm(int* A, int ASize, int k,int* returnSize)
{
	int AS = ASize;
	int KS = 0;
	int ktmp = k;

	while (ktmp)
	{
		++KS;
		ktmp = ktmp / 10;
	}

	int N = AS > KS ? AS + 1 : KS + 1;
	int* retArr = malloc(sizeof(int)*N);
	int i = AS - 1;
	int next = 0;
	int reti = 0;

	while (i >= 0 || k > 0)
	{
		int ret = A[i] + k % 10 + next;
		k = k / 10;
		i--;

		if (ret >= 10)
		{
			next = 1;
			ret -= 10;
		}
		else
		{
			next = 0;
		}

		retArr[reti++] = ret;
	}

	if (next == 1)
	{
		retArr[reti++] = 1;
	}

	*returnSize = reti;

	int left = 0, right = reti - 1;
	while (left<right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		++left;
		--right;
	}
	return retArr;
}