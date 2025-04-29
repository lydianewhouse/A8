#pragma once
#include <string>

class Manual{
    public:
    std::string engine, seats, tripComputer, gps, color;
    bool hasSunroof;
    void listFeatures() const;
};