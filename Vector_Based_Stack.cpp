#include <stack>
#include <vector>
#include <iostream>


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

	/*Find Average Value of stack elements*/
	int average = numbers.size(); //set average to the size of the list, will be divided from sum at the end for the real average
	int sum = 0;		//sum of the numbers, starts with 0

	while (!numbers.empty()) {		//while list is not empty, add the top number, pop it, add the new top number, etc.
		sum = sum + numbers.top();
		numbers.pop();
	}
	average = sum / average;			//average is the sum divided by the size of the list
	std::cout << average << std::endl;
	
}
