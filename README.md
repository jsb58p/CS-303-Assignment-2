# Assignment 2 - Single Linked List

- Node.h and Single_Linked_List.h must be in the same repository with the main file Single_Linked_List.cpp.

  ---
## Function Descriptions
*The Single_Linked_List class is a template class.* **Item_Type** *refers to the data type given in the template parameter.*

---
- **void push_front(const Item_Type&)**
: Inserts a new element of type at the beginning of the list, right before its current first element. Uses parameter of type **Item_Type** as the element to be added. No return value.

---
- **void push_back(const Item_Type&)**
  : Adds a new element at the end of the list container, after its current last element. Uses parameter of type **Item_Type** as the element to be added. No return value.

---
- **void pop_front()**
  : Removes the first element in the list container, reducing its size by one. No return value. Causes an error if the list is empty.

---
 - **void pop_back()**
: Removes the last element in the list container, reducing its size by one. No return value. Causes an error if the list is empty. 

 ---
  - **Item_Type front() const**
  : Access first element. Returns the element of type **Item_Type**.

  ---
   - **Item_Type back() const**
     : Access last element. Returns the element of type **Item_Type**.

  ---
   - **bool empty() const**
     : Check whether container is empty. Returns 1 if empty. Returns 0 if not empty. 

  ---
   - **void insert(size_t, const Item_Type&)**
     : Insert item at position index (starting at 0), before the item currently at that position if it exists. Insert at the end if index is beyond the end of the list. Uses parameter of type **size_t** to determine the index, and the parameter of type **Item_Type** as the element to be added. No return value.

  ---
   - **bool remove(size_t)**
      : Remove the item at position index. Return true if successful; return false if index is beyond the end of the list. 

  ---
   - **size_t find(const Item_Type&)**
      : Uses parameter of type **Item_Type** and returns the position of the first occurrence of the given parameter if it is found. Return the size of the list if it is not found.

---
## Output

<img width="628" alt="Untitled" src="https://github.com/user-attachments/assets/cfdf2929-72cb-4095-902a-91d4c44db3a4">


-Line 7 declares an object called list, of the class Single_Linked_List, using **string** as the template parameter.

-Line 9 uses function **push_front** to push the string "ABC" to the front of the list (position 0).

-Line 10 uses function **push_back** to push the string "DEF" to the back of the list (position 1).

-Line 11 uses the function **insert** to insert the string "GHI" at position 1 (the item previously at position 1, string "DEF", is now at position 2).

-Line 13 uses the function **front** and outputs the result. The front of the list, position 0, holds the string "ABC".

-Line 14 uses the function **back** and outputs the result. The back of the list is at position 2, and holds the string "DEF".

-Line 16 uses the function **pop_back** to remove the last item in the list, the string "DEF".

-Line 18 uses the function **back** and outputs the result. Since item 2, the string "DEF" is removed, the back item is now at position 1, and holds the string "GHI".

-Line 20 uses the function **pop_front** to remove the first item in the list, the string "ABC".

-Line 22 uses the function **front** and outputs the result. Since string "ABC" was removed from the front, the new front item is string "GHI".

-Line 24 uses the function **empty** and outputs the result. There is still one item in the list, so the output is 0.

-Line 26 uses the function **remove** with the parameter **1** and outputs the results. Since there is only one item in the list, at position 0, the return value is 0, indicating that the removal was **not** successful.

-Line 28 uses the function **find** with the parameter **"GHI"** and outputs the results. The string "GHI" is the first and only item left on the list. The return value is 0 because the item is at position 0.

-Line 30 uses the function **remove** with the parameter **0** and outputs the results. The result is 1, indicating that the removal was successful. 

-Line 32 uses the function **empty** and outputs the results. Since the list is now empty, the output is 1.
  
---
---
# Assignment 2 - Implement a stack of integers using a vector

-Vector_Based_Stack.h, Vector_Based_Stack_Imp.cpp, and Vector_Based_Stack.cpp must be in the same repository.
