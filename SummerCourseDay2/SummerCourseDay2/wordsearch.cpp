#include"wordsearch.h"
int wordsearch(char **a, char *s,int count,int length,int row,int col,int dir, int maxrow,int maxcol)
{
	if (count == length)
	{
		return 1;
	}
	if (row < 0 || col < 0 || row >= maxrow || col >= maxcol)
	{
		return 0;
	}
	if (a[row][col] == s[count])
	{
		switch (dir)
		{
		case 1:wordsearch(a, s, count + 1, length, row + 1, col, dir, maxrow, maxcol);
			break;
		case 2:wordsearch(a, s, count + 1, length, row + 1, col + 1, 2, maxrow, maxcol);
			break;
		case 3:wordsearch(a, s, count + 1, length, row, col + 1, 3, maxrow, maxcol);
			break;
		case 4:wordsearch(a, s, count + 1, length, row + 1, col - 1, 4, maxrow, maxcol);
			break;
		case 5:wordsearch(a, s, count + 1, length, row - 1, col, 5, maxrow, maxcol);
			break;
		case 6: wordsearch(a, s, count + 1, length, row - 1, col - 1, 6, maxrow, maxcol);
			break;
		case 7:wordsearch(a, s, count + 1, length, row - 1, col, 7, maxrow, maxcol);
			break;
		case 8: wordsearch(a, s, count + 1, length, row + 1, col - 1, 8, maxrow, maxcol);
			break;

		}
	}
	
	
}
void input()
{
	int m, n;
	//scanf_s("%d,%d", &m, &n);
	char **a = (char **)malloc(sizeof(char *)*3);
	for (int i = 0; i < 3; i++)
	{
		a[i] = (char*)malloc(sizeof(char*)*10);
	}
	int row = 3;
	int col = 9;
	strcpy(a[0], "hehehoooo");
	strcpy(a[1], "mehhelolk");
	strcpy(a[2], "hvajlsdjf");

	/*for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}*/
	char * s = (char*)malloc(sizeof(char*) * 10);
	strcpy(s, "oj");
	int length = 2;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (a[i][j] == s[count])
			{
				if (i < row-1 && a[i + 1][j] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i + 2, j, 1,row,col);
				}
				if (i < row-1 && j<col-1 && a[i + 1][j + 1] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i + 2, j + 2, 2,row,col);
				}
				if (j< col-1 && a[i][j+1] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i, j+2, 3,row,col);
				}
				if (i < row-1 && j>0 && a[i + 1][j-1] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i + 2, j-2, 4,row,col);
				}
				if (i > 0 && a[i - 1][j] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i - 2, j, 5,row,col);
				}
				if (i > 0 &&j>0 && a[i - 1][j-1] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i - 2, j-2, 6,row,col);
				}
				if (i > 0 && a[i -1][j] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i - 2, j, 7,row,col);
				}
				if (i < row-1 && j>0 && a[i + 1][j-1] == s[count + 1])
				{
					sum += wordsearch(a, s, count + 2, length, i + 2, j-2, 8,row,col);
				}
			}
		}
	}
	printf("%d", sum);
}