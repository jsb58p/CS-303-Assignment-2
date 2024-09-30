#ifndef SINGLE_LINKED_LIST_H_
#define SINGLE_LINKED_LIST_H_
#include "Node.h"



template<typename Item_Type>
class Single_Linked_List {
public:
	/*Function Headers*/
	void push_front(const Item_Type&); //Inserts a new element at the beginning of the list, right before its current first element.
	void push_back(const Item_Type&);  //Adds a new element at the end of the list container, after its current last element.
	void pop_front();				//Removes the first element in the list container, reducing its size by one.
	void pop_back();				//Removes the last element in the list container, reducing its size by one.
	Item_Type front() const;		//Access first element
	Item_Type back() const;			//Access last element
	bool empty() const;				//Check whether container is empty
	void insert(size_t, const Item_Type&);		//insert item at position index (starting at 0).Insert at the end if index is beyond the end of the list
	bool remove(size_t);			//Remove the item at position index. Return true if successful; return false if index is beyond the end of the list.
	size_t find(const Item_Type&);	//Return the position of the first occurrence of item if it is found.Return the size of the list if it is not found.

	/*constructor, sets num_items to 0*/
	Single_Linked_List<Item_Type>(): num_items(0) {}

	Node<Item_Type>* head; //pointer keeps track of first item in list
	Node<Item_Type>* tail;	//pointer keeps track of last item in list
	size_t num_items;		//keeps track of the number of items in the list

};

#include "Single_Linked_List.tpp"

#endif
