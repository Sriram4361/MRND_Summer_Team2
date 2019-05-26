#include"twoColorSort.h"
void colorsort1(int arr[],int size)
{
	for (int ind = 0; ind < size - 1; ind++)
	{
		for (int var = 0; var < size - ind - 1; var++)
		{
			if (arr[var] > arr[var + 1])
			{
				int temp = arr[var];
				arr[var] = arr[var + 1];
				arr[var + 1] = temp;
			}
		}
	}
}
void colorsort2(int a[], int size)
{
	int last = size - 1;
	int first = 0;
	while (first < last)
	{
		if (a[first] == 1 && a[last]==0)
		{
			a[first] = 0;
			a[last] = 1;
			first++;
			last--;
		}
		else
		{
			if (a[first] == 0)
				first++;
			if (a[last] == 1)
				last--;
		}
	}
}
void colorsort3(int arr[], int size)
{
	int sum = 0,ind;
	for (ind = 0; ind < size; ind++)
	{
		sum += arr[ind];
	}
	for (ind = 0; ind < size - sum; ind++)
	{
		arr[ind] = 0;
	}
	while (ind < size)
	{
		arr[ind] = 1;
		ind++;
	}
}
void printArray(int a[],int size)
{
	for (int ind = 0; ind < size; ind++)
	{
		printf("%d ", a[ind]);
	}
}
void input(int arr[], int size)
{
	printf("enter the numbers:");
	for (int ind = 0; ind < size; ind++)
	{
		scanf_s("%d", &arr[ind]);
	}
}
void colorsortproblem()
{
	int size;
	scanf_s("%d", &size);
	int *arr = (int *)malloc(sizeof(int)*size);
	input(arr, size);
	printf("calling colorsort1");
	colorsort1(arr, size);
	printArray(arr, size);
	scanf_s("%d", &size);
	free(arr);
	arr = (int *)malloc(sizeof(int)*size);
	input(arr, size);
	printf("calling colorsort2");
	colorsort2(arr, size);
	printArray(arr, size);
	scanf_s("%d", &size);
	free(arr);
	arr = (int *)malloc(sizeof(int)*size);
	input(arr, size);
	printf("calling colorsort3");
	colorsort3(arr, size);
	printArray(arr, size);
	free(arr);
}