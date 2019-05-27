#include <stdio.h>
#include <stdlib.h>
struct DLLNode{
	int data;
	DLLNode *left, *right;
};

typedef struct dnode Dnode;

DLLNode* getDLLNode(int val);
DLLNode* split(DLLNode *root);
void printDLL(DLLNode *root);
DLLNode* merge(DLLNode *low, DLLNode *mid);
void mergeSort(DLLNode **root);
void testMergeSort();
