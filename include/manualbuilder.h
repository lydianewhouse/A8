#pragma once
#include <string>
#include <iostream>
#include "builder.h"
#include "manual.h"

class ManualBuilder : public Builder{
    private:
    Manual *manual;
    public:
    //Fresh builder should contain blank car
    ManualBuilder(){this->reset();}
    ~ManualBuilder(){delete manual;}
    void reset() override {this->manual = new Manual();}
    //Production steps with same car instance
    void setEngine(std::string &engine) override;
    void setSeats(std::string &seats) override;
    void setTripComputer(std::string &tripComputer) override;
    void setGPS(std::string &gps) override;
    void setColor(std::string &color) override;
    void setSunroof(bool hasSunroof) override;
    // smart pointers may be better
    Manual* GetProduct();
};