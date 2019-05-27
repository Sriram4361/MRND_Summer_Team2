#include"recursionsum.h"
long sumarray(int a[], int index)
{
	if (index < 0)
		return 0;
	return (a[index] + sumarray(a, index - 1));
}
void recursionsum()
{
	printf("Sum of Array using recursion:\n enter the size:");
	int size;
	scanf_s("%d", &size);
	int *arr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d",&arr[i]);
	}
	printf("%ld", sumarray(arr, size-1));
}