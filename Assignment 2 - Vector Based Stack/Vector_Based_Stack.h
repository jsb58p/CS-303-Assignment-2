#ifndef VECTOR_BASED_STACK_H_
#define VECTOR_BASED_STACK_H_
#include <vector>
#include <cstddef>


template<typename Item_Type>
class vector_based_stack {
public:
	void push(const Item_Type&); //push items to top of stack
	Item_Type& top();   //return top of stack
	const Item_Type& top() const; //return top of stack
	void pop(); //remove top of stack
	bool empty() const; //check if stack is empty
	size_t size() const; //return size of stack
	int average(); //function header for finding average

	vector_based_stack() {} //constructor
private:
	std::vector<Item_Type> container; //the vector container holding all the items.

};


#include "Vector_Based_Stack_Imp.tpp"

#endif
