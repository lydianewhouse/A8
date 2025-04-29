#pragma once
#include <string>
#include <iostream>
#include "builder.h"
#include "car.h"

class CarBuilder : public Builder{
    private:
    Car *car;
    public:
    //Fresh builder should contain blank car
    CarBuilder(){this->reset();}
    ~CarBuilder(){delete car;}
    void reset() override {this->car = new Car();}
    //Production steps with same car instance
    void setEngine(std::string &engine) override;
    void setSeats(std::string &seats) override;
    void setTripComputer(std::string &tripComputer) override;
    void setGPS(std::string &gps) override;
    void setColor(std::string &color) override;
    void setSunroof(bool hasSunroof) override;
    Car* GetProduct();
};