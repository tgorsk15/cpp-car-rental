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
    else if (choice == 2) {
        std::cout << "Feature not yet available";
    }
    else if (choice == 3) {
        updateAction();
    }

}


void List::updateAction()
{
    int choice;

    std::cout << "\n\n\n\n";
    std::cout << "1 - Add a vehicle to the Database\n";
    std::cout << "2 - Remove a vehicle from Database\n\n";

    std::cout << "Enter your choice and submit ";

    std::cin >> choice;
}
