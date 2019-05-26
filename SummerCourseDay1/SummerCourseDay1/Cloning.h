#include<stdio.h>
#include<map>
#include<iterator>
using namespace std;
struct random{
	int data;
	struct random *next;
	struct random* rand;
};
struct random* cloneLinkedList(struct random* head);