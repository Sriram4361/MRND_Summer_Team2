#include"fibonacci.h"
int fibonacci(int n){
	if (n == 0 || n == 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int optfib(int n, map<int, int> a)
{
	if (n == 0 || n == 1)
		return n;
	if (a[n])
		return a[n];
	else
	{
		a[n] = optfib(n - 1, a) + optfib(n - 2, a);
		return a[n];
	}
	
}

int** multiplyMatrix(int **matrix1, int **matrix2){
	int i;
	int **result = (int**)malloc(2 * sizeof(int*));
	for (i = 0; i < 2; i++)
		result[i] = (int*)malloc(2 * sizeof(int));
	result[0][0] = (matrix1[0][0] * matrix2[0][0]) + (matrix1[0][1] * matrix2[1][0]);
	result[0][1] = (matrix1[0][0] * matrix2[0][1]) + (matrix1[0][1] * matrix2[1][1]);
	result[1][0] = (matrix1[1][0] * matrix2[0][0]) + (matrix1[1][1] * matrix2[1][0]);
	result[1][1] = (matrix1[1][0] * matrix2[0][1]) + (matrix1[1][1] * matrix2[1][1]);
	return result;
}

int **fibMatrix(int **arr, int n){
	if (n == 1)
		return arr;
	if (n % 2 == 0)
		return multiplyMatrix(fibMatrix(arr, n / 2), fibMatrix(arr, n / 2));
	else
		return multiplyMatrix(multiplyMatrix(fibMatrix(arr, n / 2), fibMatrix(arr, n / 2)), fibMatrix(arr, 1));
}

void findFibLogN(int n){
	int i;
	int **initial = (int**)malloc(2 * sizeof(int*)), **fibMat;
	for (i = 0; i < 2; i++)
		initial[i] = (int*)malloc(2 * sizeof(int));
	initial[0][0] = 0;
	initial[0][1] = 1;
	initial[1][0] = 1;
	initial[1][1] = 1;
	fibMat = fibMatrix(initial, n);
	printf("Value: %ld\n", fibMat[1][1]);
}

void testFib(){
	printf("enter the number for fibonacci series:");
	int n;
	scanf_s("%d", &n);
	printf("first approach:%d\n",fibonacci(n));
	map<int, int> m;
	printf("second approach:%d\n", optfib(n,m));
	printf("third approach:");
	if (n <= 1)
		printf("%d\n", n);
	else
		findFibLogN(n - 1);

	
}