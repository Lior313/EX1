#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

typedef struct LinkedList
{
	Node* head;
}LinkedList;

void initList(LinkedList* list);
void insertAtHead(LinkedList* list, int value);
int removeFromHead(LinkedList* list);
void freeList(LinkedList* list);
bool isListEmpty(LinkedList* list);

#endif