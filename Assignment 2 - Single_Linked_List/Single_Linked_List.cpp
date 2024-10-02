#include "Single_Linked_List.h"
#include <iostream>


int main() {

    Single_Linked_List<std::string> list;         //create a Single Linked List object

    list.push_front("ABC");            //push item to front of list.
    list.push_back("DEF");            //push item to back of list.
    list.insert(1, "GHI");            //insert item at position 1, before the item that was previously at position 1

    std::cout << list.front() << std::endl;        //output the front of the list (position 0)
    std::cout << list.back() << std::endl;         //output the back of the list.

    list.pop_back();            //remove the back of the list.

    std::cout << list.back() << std::endl;        //output the new back of the list.

    list.pop_front();                //remove the front of the list.

    std::cout << list.front() << std::endl;        //output the new front of the list. Since there is only one item left, the front and the back of the list are now the same.

    std::cout << list.empty() << std::endl;        //check if the list is empty (it isn't, there is one item left)

    std::cout << list.remove(1) << std::endl;       //attempts to remove an item at position 1. The output indicates whether the removal is successful. There is only one item at position 0 so it is not successful.  

    std::cout << list.find("GHI") << std::endl;    //finds the position of the item "GHI"

    std::cout << list.remove(0) << std::endl;        //successfully removes the remaining item at position 0. 

    std::cout << list.empty() << std::endl;        //checks if list is empty. It is. 


    return 0;
}
