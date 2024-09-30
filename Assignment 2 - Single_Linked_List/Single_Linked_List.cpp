#include "Single_Linked_List.h"
#include <iostream>


int main() {

    Single_Linked_List<std::string> list;

    list.push_front("ABC");
    list.push_back("DEF");
    list.insert(1, "GHI");

    std::cout << list.front() << std::endl;
    std::cout << list.back() << std::endl;

    list.pop_back();

    std::cout << list.back() << std::endl;

    list.pop_front();

    std::cout << list.front() << std::endl;

    std::cout << list.empty() << std::endl;

    std::cout << list.remove(1) << std::endl;

    std::cout << list.find("GHI") << std::endl;

    std::cout << list.remove(0) << std::endl;

    std::cout << list.empty() << std::endl;


    return 0;
}
