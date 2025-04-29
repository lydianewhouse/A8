#include "manual.h"
#include <iostream>

void Manual::listFeatures() const
{
    std::cout << "Manual Features: ";
    std::cout << "\n Engine: " << engine;
    std::cout << "\n Seats: " << seats;
    std::cout << "\n TripComputer: " << tripComputer;
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