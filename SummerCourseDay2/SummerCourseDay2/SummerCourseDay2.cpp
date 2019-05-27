// SummerCourseDay2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include "MergeLinkedList.h"
#include"recursionsum.h"
#include"fibonacci.h"
#include"staircase.h"
#include"ndigitnumbers.h"
#include"wordsearch.h"
#include"linkedlistreverse.h"
#include"permutations.cpp"
int main()
{
	recursionsum();

	printf("\n");

	testFib();

	entryLinkedlist();
	printf("\n");
	testMergeSort();

	printf("\n");
	ndigitnumbers();
	findperm();

	inputwordsearch();
	teststaircase();
	return 0;
}
