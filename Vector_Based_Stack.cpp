#include <stack>
#include <vector>
#include <iostream>


#include <stack>
#include <vector>
#include <iostream>

int average(std::stack<int, std::vector<int>>); //function header for finding average

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

	/*Find the average value of the stack elements*/
	std::cout<< average(numbers)<<std::endl;

	/*Make sure the stack is still the same size*/
	std::cout << numbers.size();
	
	
}

int average(std::stack<int, std::vector<int>> theStack) { //finds the average value of the elements
	/*Find Average Value of stack elements*/
	int size = theStack.size(); //set av to the size of the list, will be divided from sum at the end for the real average
	int sum = 0;		//sum of the numbers, starts with 0

	while (!theStack.empty()) {		//while list is not empty, add the top number, pop it, add the new top number, etc.
		sum = sum + theStack.top();
		theStack.pop();
	}
	size = sum / size;			//average is the sum divided by the size of the list
	return size;
}
