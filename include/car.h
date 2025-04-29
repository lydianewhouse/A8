#pragma once

#include <string>

class Car{

    public:
        std::string engine;
        std::string seats;
        std::string tripComputer;
        std::string gps;
        std::string color;
        bool hasSunroof;
        
        void listFeatures() const;

};