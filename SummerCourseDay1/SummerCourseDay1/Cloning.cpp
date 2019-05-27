#include"Cloning.h"
struct random* cloneLinkedList(struct random* head)
{
	struct random* clonehead = NULL, *clonetemp;
	map <struct random*, struct random*>original;
	struct random *temp = head;
	while (temp)
	{
		struct random *tempo = (struct random*)malloc(sizeof(struct random));
		tempo->data = temp->data;
		if (clonehead == NULL)
		{
			clonehead = tempo;
			clonetemp = clonehead;
		}
		else
		{
			clonetemp->next = tempo;
			clonetemp = tempo;
		}
		temp = temp->next;
	}
	clonetemp->next = NULL;
	temp = head;
	clonetemp = clonehead;
	while (clonetemp)
	{
		original.insert(pair<struct random*, struct random*>(temp, clonetemp));
		temp = temp->next;
		clonetemp = clonetemp->next;
	}
	temp = head;
	clonetemp = clonehead;
	while (temp)
	{
		original[temp]->rand = original[temp->rand];
		temp = temp->next;
	}
	while (clonehead)
	{
		printf("%d", clonehead->data);
		clonehead = clonehead->next;
	}
}