#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
    private:
        std::string make;
        std::string model;
        std::string color;
        int year;
        int mileage;
        std::string licensePlate;
        bool isAvailable;

    protected:

    public:
        // maybe add default values to below line
        Car(){

        }

        ~Car(){

        }
        void createCar();
};

#endif
