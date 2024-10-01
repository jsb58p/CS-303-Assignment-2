# Assignment 2 - Implement a stack of integers using a vector

Vector_Based_Stack.h, Vector_Based_Stack_Imp.tpp, and Vector_Based_Stack.cpp must be in the same repository.
Function Descriptions
int average() : Finds the average value of a stack of integer elements. Returns the integer value of the calculated average.

-All other functions are provided by the C++ standard library vector class member functions.

---
## Output

<img width="555" alt="VectorBasedStack" src="https://github.com/user-attachments/assets/716c6986-087c-43a5-87bf-5f00c9c9f236">

-Line 5 creates a **vector_based_stack** object called **numbers**. The template parameter **int** means that the elements will be of type int.

-Line 8 uses the function **empty** to check if the stack is empty or not and outputs the results. The stack is empty, so the return value is 1.

-Line 11-15 uses the function **push** to push the values 1, 2, 3, 4, and 5 to the top of the stack respectively.

-Line 18 uses the function **pop** to remove the item at the top of the stack (integer 5).

-Line 21 uses the function **top** and outputs the results. Since integer 5 was removed on line 18, the new item at the top of the stack is integer 4, so the output is 4.

-Line 24 uses the function **average** and outputs the results. 4+3+2+1 = 10. 10/4 = 2 using integer division, so the output is 2.
