#include "queue.h"
#include <cstdlib> // for rand()

//Queue methods
//===================================================
Queue::Queue(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node *temp;
	while(front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

bool Queue::enqueue(const Item &item)
{
	if(isfull())
	{
		return false;
	}

	Node *add = new Node; //create node
	if(add == NULL)
		return false;     //quit if none available(申请内存失败)

	add->item = item;     
	add->next = NULL;     //set node pointers
	items++;

	if(front == NULL)
		front = add;
	else
		rear->next = add; //set add to tail node

	rear = add;           //update rear pointer to item
}

bool Queue::dequeue(Item &item)
{
	if(front == NULL)
	{
		return false;
	}
	item = front->item;
	items--;
	Node *temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
	{
		rear = NULL;//如果删除头结点后，队列为空，不执行此语句，则rear将变成野值针
	}
	return true;
}

//customer methods
//=============================================================================
/*
when is the time at which the customer arrives
the arrive time is set to when 
and the processing is set to a random value in the range 1-3min
*/
void Customer::set(long when)
{
	processtime = std::rand()%3 + 1;
	arrive = when;
}