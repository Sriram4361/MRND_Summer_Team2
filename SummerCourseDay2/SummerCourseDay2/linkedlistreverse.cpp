#include"linkedlistreverse.h"
Node* inputLL()
{
	int size;
	printf("size: ");
	scanf_s("%d", &size);
	printf("enter the numbers\n");
	Node *head = NULL, *tempo = NULL;
	int  num;
	for (int ind = 0; ind < size; ind++)
	{
		Node* temp = (Node*)malloc(sizeof(Node));
		scanf_s("%d", &num);
		temp->data = num;
		temp->next = NULL;
		if (head == NULL)
		{
			tempo = head = temp;
		}
		else
		{
			tempo->next = temp;
			tempo = temp;
		}
	}
	return head;
}
Node *reverse(Node *head)
{
	if (head->next == NULL)
	{
		return head;
	}
	Node* node1=reverse(head);
	node1->next = head;
	head->next = NULL;
	return head;
}
void entryLinkedlist()
{
	Node* head = inputLL();
	head = reverse(head);
	Node* temp = head;
	while (temp)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
}