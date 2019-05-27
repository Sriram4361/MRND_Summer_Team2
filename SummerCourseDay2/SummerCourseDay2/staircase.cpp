#include"staircase.h"
int staircase(int n, int k)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	int sum=0;
	for (int ind = 1; ind <= k; ind++)
	{
		if (ind > n)
			break;
		sum += staircase(n - ind,k);
	}
	return sum;
}
void teststaircase()
{
	printf("stair case:\nenter the steps and possibility:\n");
	int n, k;
	scanf_s("%d%d", &n, &k);
	printf("no.of possibilities are:%d", staircase(n, k));
}