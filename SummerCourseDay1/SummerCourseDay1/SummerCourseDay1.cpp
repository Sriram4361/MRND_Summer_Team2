// SummerCourseDay1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"twoColorSort.h"
#include"stringCompress.h"
#include"Kreversal.h"
#include"Cloning.h"
#include"spiral.h"
int main()
{
	colorsortproblem();
	stringCompression();
	reverseLLK();
	struct random *  head = (struct random*)malloc(sizeof(struct random));
	head->data = 5;
	struct random *  temp1 = (struct random*)malloc(sizeof(struct random));
	temp1->data = 2;
	struct random *  temp2 = (struct random*)malloc(sizeof(struct random));
	temp2->data = 3;
	head->next = temp1;
	temp1->next = temp2;
	temp2->rand = head;
	head->rand = temp1;
	cloneLinkedList(head);
	spiral();
	//adding two linked list
	int x;
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);
	struct node *head1 = NULL;
	struct node *head2 = NULL;
	for (int i = 0; i < n1; i++)
	{
		scanf_s("%d", &x);
		head1 = insert1(x, head1);
	}
	for (int i = 0; i < n2; i++)
	{
		scanf_s("%d", &x);
		head2 = insert1(x, head2);
	}
	int c = 0;
	if (n1 > n2)
	{
		for (int i = 0; i < n1 - n2; i++)
		{
			struct node *temp = (struct node *)malloc(sizeof(struct node));
			temp->data = 0;
			temp->next = head2;
			head2 = temp;
		}
	}
	else if (n2>n1)
	{
		for (int i = 0; i < n2 - n1; i++)
		{
			struct node *temp = (struct node *)malloc(sizeof(struct node));
			temp->data = 0;
			temp->next = head1;
			head1 = temp;
		}
	}
	add(head1, head2, &c);
	while (head1)
	{
		printf("%d ", head1->data);
		head1 = head1->next;

	}
	char ch;
	scanf_s("%c", &ch);
	getchar();
}
	return 0;
}

