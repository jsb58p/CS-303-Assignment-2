#include "Single_Linked_List.h"

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& the_value) {
	Node<Item_Type>* temp = new Node<Item_Type>(the_value); //creates new node to be added to the list.
	/*if there are no items in the list, then make head AND tail point to the new item*/
	if (num_items == 0) {
		head = temp;
		tail = head;
	}
	/*else, make temp->next point to the current head, then assign new node as the new head*/
	else {
		temp->next = head;
		head = temp;
	}
	num_items++; //increment num_items.
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& the_value) {
	Node<Item_Type>* temp = new Node<Item_Type>(the_value); //creates new node to be added to the list.
	/*if there are no items in the list, then make head AND tail point to the new item*/
	if (num_items == 0) {
		tail = temp;
		head = tail;
	}
	/*else, make the current tail->next point to temp, and assign new node as the new tail*/
	else {
		tail->next = temp;
		tail = temp;
	}
	num_items++; //increment num_items.
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
	/*if there are no items in the list, exit the function*/
	if (num_items == 0) {
		return;
	}
	/*if there is one item in the list, delete it*/
	else if (head == tail) {
		delete head;
	}
	/*else, create a node pointer, assign head to it, assign the next item in the list to head, then delete the original head*/	
	else {
		Node<Item_Type>* toDelete = head;
		head = head->next;
		delete toDelete;
	}
	num_items--; //decrement num_items.
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
	/*If list is empty, exit the function WITHOUT decrementing num_items*/
	if (num_items == 0) {
		return;
	}
	/*If there is one item in the list, delete it*/
	else if (head == tail) {
		delete tail;
		num_items--;
	}
	/*else, create a new node pointer, assign head to it, then traverse through the list until the next item is tail. Then, assign the new node pointer to tail. Tail now reference the next-to-last item. 
	Iterate the new node pointer once more, to the item that was the old tail, and delete it*/
	else {
		Node<Item_Type>* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		tail = temp;
		temp = temp->next;
		delete temp;
	}
	num_items--;		//decrement num_items
}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() const {
	/*If the list is empty, return NULL*/
	if (num_items == 0) {
		return NULL;
	}
	/*else, return the data from the first item on the list (head)*/
	else {
		return head->data;
	}

}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() const {
	/*If the list is empty, return NULL*/
	if (num_items == 0) {
		return NULL;
	}
	/*else, return the data from the last item on the list (tail)*/
	else {
		return tail->data;
	}
}

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::empty() const {
	/*If the list is empty, return true. If not, return false*/
	if (num_items == 0) {
		return true;
	}
	else {
		return false;
	}
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
	/*If index is larger than the highest position on the list, call push_back to insert item at end of list*/
	if (index > num_items-1 || num_items == 0) {
		push_back(item);
	}
	/*Else if index is 0, call push_front to insert item at beginning of list.*/
	else if (index == 0) {
		push_front(item);
	}
	/*Else if index is in between the first and last position on the list...*/
	else if (index <= num_items-1 && index > 0) {
		Node<Item_Type>* toInsert = head;		//create new node pointer, start by pointing to head
		for (size_t i = 0; i < index-1; i++) {	//traverse the list up to the node before the index being inserted into
			toInsert = toInsert->next;			
		}
		Node<Item_Type>* temp = new Node<Item_Type>(item); //create a new node, assign it to temp node pointer
		temp->next = toInsert->next;		//the new node should point to the node after the node being pointed to by toInsert
		toInsert->next = temp;				//the node that toInsert is pointing to should now point to the newly created node. 
		num_items++;		//increment num_items.
	}
	
}

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
	/*return false if list is empty*/
	if (num_items == 0) {
		return false;
	}
	/*if index is 0, call pop_front to remove first item on list, return true*/
	if (index == 0) {
		pop_front();
		return true;
	}
	/*if index is the last possible index in the list, then call pop_back to remove the last item on the list, return true*/
	if (index == num_items-1) {
		pop_back();
		return true;
	}
	/*if index is outside the bounds of the list, return false */
	if (index > num_items-1 || index < 0){
		return false;
	}
	/*else, create a node pointer, assign head to it ...*/
	else {
		Node<Item_Type>* temp = head;				//create a node pointer for traversing the list
		for (size_t i = 1; i < index; i++) {		//traverse the list until reaching the node BEFORE given index
			temp = temp->next;
		}
		Node<Item_Type>* toRemove = temp->next;		//create another node pointer, point it to the item being deleted
		temp->next = temp->next->next;				//the item previous to the item being deleted needs to point to the item after the item to be deleted to preserve the list
		delete toRemove;							//delete the item being removed
		num_items--;								//decrement num_items
		return true;								//return true after item removal
		
	}
}

template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) {
	/*Create a node pointer, assign head to it*/
	Node<Item_Type>* toCompare = head;
	size_t index = 1; //index used to traverse list if needed
	/*if head is the item being found, then return 0 for index 0*/
	if (item == toCompare->data) {
		return 0;
	}
	/*if item is at the tail, return the last possible index*/
	else if (item == tail->data) {
		return num_items - 1;
	}
	/*If item is not at the head or tail, then traverse the list, comparing the data to item and incrementing index. If the item is found, return the current value of index */
	while (toCompare != tail) {
		toCompare = toCompare->next;
		if (item == toCompare->data) {
			return index;
		}
		index++;
	}
	return num_items; //if item was not found in list, return the size of the list.
}
