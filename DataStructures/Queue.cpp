#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->arr = new int[size];
	q->size = size;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

void cleanQueue(Queue* q)
{
	if (q->arr != nullptr)
	{
		delete[] q->arr;
		q->arr = nullptr;;
	}
	q->size = 0;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

bool isEmpty(Queue* s)
{
	return (s->count == 0);
}

bool isFull(Queue* s)
{
	return (s->count == s->size);
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		return;
	}
	q->arr[q->tail] = newValue;
	q->tail = (q->tail + 1) % q->size;
	q->count++;
}

int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return -1;
	}
	int value = q->arr[q->head];
	q->head = (q->head + 1) % q->size;
	q->count--;
	return value;
}