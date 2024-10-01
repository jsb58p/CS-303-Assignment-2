#include "Vector_Based_Stack.h"

/** Construct an initially empty stack. */



/** Pushes an item onto the top of the stack.
@param item The item to be inserted
*/
template<typename Item_Type>
void vector_based_stack<Item_Type>::push(const Item_Type& item) {
container.push_back(item);
}

/** Returns a reference to the object at the top of the stack
without removing it.
@return A reference to the object at the top of the stack
*/
template<typename Item_Type>
Item_Type& vector_based_stack<Item_Type>::top() {
return container.back();
}

/** Returns a const reference to the object at the
top of the stack without removing it.
@return A const reference to the object at the top of the stack
*/
template<typename Item_Type>
const Item_Type& vector_based_stack<Item_Type>::top() const {
return container.back();
}

/** Removes the top item from the stack.
*/
template<typename Item_Type>
void vector_based_stack<Item_Type>::pop() {
container.pop_back();
}

/** Determines whether the stack is empty. */
template<typename Item_Type>
bool vector_based_stack<Item_Type>::empty() const {
return container.empty();
}

/** Returns the number of items in the stack. */
template<typename Item_Type>
size_t vector_based_stack<Item_Type>::size() const {
return container.size();
}


template<>
int vector_based_stack<int>::average() { //finds the average value of the elements, if integer
	/*Find Average Value of stack elements*/
	int size = container.size(); //set av to the size of the list, will be divided from sum at the end for the real average
	int sum = 0;		//sum of the numbers, starts with 0

	while (!container.empty()) {		//while list is not empty, add the top number, pop it, add the new top number, etc.
		sum = sum + container.back();
		container.pop_back();
	}
	size = sum / size;			//average is the sum divided by the size of the list
	return size;
}


template<typename Item_Type>
int vector_based_stack<Item_Type>::average() { //returns 0 if stack elements are not integers
	
	return 0;
	
}
