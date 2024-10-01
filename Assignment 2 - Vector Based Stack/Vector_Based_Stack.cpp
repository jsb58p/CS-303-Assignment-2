#include "Vector_Based_Stack.h"
#include <iostream>

int main() {
	vector_based_stack<int> numbers; //create a stack object using a vector container for holding integers

	/*check the stack is empty or not*/
	std::cout << numbers.empty() << std::endl;

	/*Insert some values onto the stack*/
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);
	numbers.push(4);
	numbers.push(5);

	/*Remove an element from the stack*/
	numbers.pop();

	/*Find the top of the stack*/
	std::cout << numbers.top() << std::endl;

	/*Find the average value of the stack elements*/
	std::cout << numbers.average() << std::endl;
	


}
