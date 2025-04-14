// #include "car.hpp"
#include <vector>

class List {
    private:
        std::vector<Car> cars;
    protected:
    public:
        List(){

        }

        ~List(){

        }

        void printOptions();
        void updateAction();
        void addCar();
        void deleteCar();
        void printCars();
};
