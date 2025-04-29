#include "manualbuilder.h"

void ManualBuilder::setEngine(std::string &engine) {
    this->manual->engine = engine;
}


void ManualBuilder::setSeats(std::string &seats) {
    this->manual->seats = seats;
}


void ManualBuilder::setTripComputer(std::string &tripComputer){
    this->manual->tripComputer = tripComputer;
}


void ManualBuilder::setGPS(std::string &gps){
    this->manual->gps = gps;
}

void ManualBuilder::setColor(std::string &color)
{
    this->manual->color = color;
}

void ManualBuilder::setSunroof(bool hasSunroof)
{
    this->manual->hasSunroof = hasSunroof;
}

// smart pointers may be better
Manual* ManualBuilder::GetProduct(){
    Manual *result = this->manual;
    this->reset();
    return result;
}
