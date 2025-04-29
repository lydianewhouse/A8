#pragma once
#include <string>
#include "car.h"
#include "manual.h"


class Builder{
    public:
    virtual ~Builder(){}
    virtual void setEngine(std::string &engine) = 0;
    virtual void setSeats(std::string &seats) = 0;
    virtual void setTripComputer(std::string &tripCompueter) = 0;
    virtual void setGPS(std::string &gps) = 0;
    virtual void reset() = 0;
    virtual void setColor(std::string &color) = 0;
    virtual void setSunroof(bool hasSunroof) = 0;
};