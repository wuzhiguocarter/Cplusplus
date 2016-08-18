#include "stack.h"

Stack::Stack()//create an empty stack
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if(~isfull())
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if(~isempty())
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}