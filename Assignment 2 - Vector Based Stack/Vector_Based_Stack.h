#ifndef VECTOR_BASED_STACK_H_
#define VECTOR_BASED_STACK_H_
#include <vector>


template<typename Item_Type>
class vector_based_stack {
public:
	void push(const Item_Type&);
	Item_Type& top();
	const Item_Type& top() const;
	void pop();
	bool empty() const;
	size_t size() const;
	int average(); //function header for finding average

	vector_based_stack() {}
private:
	std::vector<Item_Type> container;

};


#include "Vector_Based_Stack_Imp.tpp"

#endif
