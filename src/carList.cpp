#include <iostream>
#include "include/carList.hpp"


void List::printList()
{
    int choice;

    std::cout << "1 - Browse our available vehicles\n";
    std::cout << "2 - Return a rental car\n";
    std::cout << "3 - Update Car Listings\n";
    std::cout << "Type your desired number and press Enter: ";

    std::cin >> choice;

    if (choice == 1) {
        std::cout << "We do not have any vehicles currently available";
    }
}

// plug into Claude
