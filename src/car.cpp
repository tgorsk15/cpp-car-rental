#include <iostream>
#include "include/car.hpp"


void Car::createCar()
{
    std::cout << "Enter car details:\n";
    std::cout << "Make: ";
    std::cin >> make;
    std::cout << "Model: ";
    std::cin >> model;

    std::cout << "Color: ";
    std::cin >> color;

    std::cout << "Year: ";
    std::cin >> year;

    std::cout << "Current mileage: ";
    std::cin >> mileage;

    std::cout << "License Plate: ";
    std::cin >> licensePlate;

    isAvailable = true;
}
