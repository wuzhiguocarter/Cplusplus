//stack.h ---class definition for the stack ADT
#ifndef _STACK_H_
#define _STACK_H_

typedef unsigned long Item;

class Stack{
/*data type to be storied in memory*/
private:
	enum {MAX = 10};//constant specific to class
//	static const int MAX = 10;//static member
	Item items[MAX];//holds stack items
	int top;//index for top item(to be pushed)
//attention: top = #Stack + 1
public:
	Stack();
//	Stack(const Item * m_items,int m_top = 0);
//	~Stack();
	bool isfull() const;//return false if stack already is full, true otherwise
	bool isempty() const;//return false if stack already is empty, true otherwise
	bool push(const Item & item);//add item to stack
	bool pop(Item & item);//pop top into item

};

#endif