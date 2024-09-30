#include <iostream>
#include "Vector_Based_Stack.h"

int main() {
	std::stack<int, std::vector<int>> numbers; //create a stack object using a vector container for holding integers

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

	std::cout << average(numbers) << std::endl;
	std::cout << numbers.size();


}
