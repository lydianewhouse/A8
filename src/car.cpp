#include "car.h"
#include <iostream>

void Car::listFeatures() const
{
    std::cout << "Car Features:";
    std::cout << "\n Engine: " << engine;
    std::cout << "\n Seats: " << seats;
    std::cout << "\n tripComputer: " << tripComputer;
    std::cout << "\n GPS: " << gps << "\n";
    std::cout << "\n Color: " << color << "\n";
    std::cout << "\n Sunroof: ";
    if (hasSunroof)
    {
        std::cout << "True" << "\n";
    }
    else{
        std::cout << "False" << "\n";
    }
}