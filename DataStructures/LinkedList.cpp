#include "LinkedList.h"
#include <iostream>

void initList(LinkedList* list)
{
	list->head = nullptr;
}

bool isListEmpty(LinkedList* list)
{
	return (list->head == nullptr);
}

void insertAtHead(LinkedList* list, int value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = list->head;
	list->head = newNode;
}

int removeFromHead(LinkedList* list)
{
	if (isListEmpty(list))
	{
		return -1;
	}
	Node* temp = list->head;
	int value = temp->data;
	list->head = list->head->next;
	delete temp;
	return value;
}

void freeList(LinkedList* list)
{
	while (!isListEmpty(list))
	{
		removeFromHead(list);	
	}
}