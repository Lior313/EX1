#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	if (nums == nullptr || size <= 1)
	{
		return;
	}
	Stack s;
	initStack(&s);
	for (unsigned int i = 0; i < size; i++)
	{
		push(&s, nums[i]);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		nums[i] = pop(&s);	
	}

	cleanStack(&s);
}

int* reverse10()
{
	const unsigned int SIZE = 10;
	int* nums = new int[SIZE];

	std::cout << "Please enter 10 integers" << std::endl;
	for (unsigned int i = 0; i < SIZE; i++)
	{
		std::cin >> nums[i];
	}

	reverse(nums, SIZE);
	return nums;
}