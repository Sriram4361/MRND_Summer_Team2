#include"ndigitnumbers.h"
void print(int ar[],int size)
{
	int i = 0;
	while (i<size)
	{
		printf("%d", ar[i]);
		i++;
	}
}
void printingnumbers(int available[], int size,int limit)
{
	if (size >= limit)
	{
		print(available,size);
		printf("\n");
	}
	else
	{
		for (int i = 0; i <= 9; i++)
		{
			available[size] = i;
			printingnumbers(available, size+1, limit);
		}
	}
}
void ndigitnumbers()
{
	int n;
	printf("nth digit numbers:\nenter value of limit:");
	scanf_s("%d", &n);
	int *a=(int*)malloc(sizeof(int)*n);
	printingnumbers(a, 0, n);
}

