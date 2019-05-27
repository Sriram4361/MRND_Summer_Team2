#include"spiral.h"
void spiral()
{
	int arr[4][4] = { { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 } };
	int rmin, rmax, colmin, colmax;
	rmin = colmin = 0;
	rmax = colmax = 3;
	int count = 0;
	while (count<16)
	{
		for (int i = colmin; i <= colmax; i++)
		{
			count++;
			printf("%d", arr[rmin][i]);
			if (count >= 16)
				return;
		}
		rmin++;
		for (int i = rmin; i <= rmax; i++)
		{
			count++;
			printf("%d", arr[i][colmax]);
			if (count >= 16)
				return;
		}
		colmax--;
		for (int i = colmax; i >= colmin; i--)
		{
			count++;
			printf("%d", arr[rmax][i]);
			if (count >= 16)
				return;
		}
		rmax--;
		for (int i = rmax; i <= rmin; i--)
		{
			count++;

			printf("%d", arr[i][colmin]);
			if (count >= 16)
				return;
		}
		colmin++;
	}
}

void add(struct node *head1, struct node *head2, int *c)
{
	if (head1 && head2)
	{
		add(head1->next, head2->next, c);
		int temp = head1->data;
		head1->data = (head1->data + head2->data + *c) % 10;
		*c = (temp + head2->data + *c) / 10;
	}
}
struct node * insert1(int x, struct node *head)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if (!head)
		head = temp;
	else
	{
		struct node *p = head;
		while (p->next)
			p = p->next;
		p->next = temp;
	}
	return head;
}