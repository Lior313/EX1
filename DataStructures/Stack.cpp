#include "Stack.h"

void initStack(Stack* s)
{
	initList(&(s->list));
}

void cleanStack(Stack* s)
{
	freeList(&(s->list));
}

bool isEmpty(Stack* s)
{
	return (isListEmpty(&(s->list)));
}

bool isFull(Stack* s)
{
	return false;	
}

void push(Stack* s, unsigned int element)
{
	insertAtHead(&(s->list), element);
}

int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return -1;
	}
	return removeFromHead(&(s->list));
}