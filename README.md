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
  : Removes the first element in the list container, reducing its size by one. No return value.

---
 - **void pop_back()**
: Removes the last element in the list container, reducing its size by one. No return value.

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
     : Insert item at position index (starting at 0). Insert at the end if index is beyond the end of the list. Uses parameter of type **size_t** to determine the index, and the parameter of type **Item_Type** as the element to be added. No return value.

  ---
   - **bool remove(size_t)**
      : Remove the item at position index. Return true if successful; return false if index is beyond the end of the list. 

  ---
   - **size_t find(const Item_Type&)**
      : Uses parameter of type **Item_Type** and returns the position of the first occurrence of the given parameter if it is found. Return the size of the list if it is not found.
  

