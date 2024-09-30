#include "Vector_Based_Stack.h"

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
