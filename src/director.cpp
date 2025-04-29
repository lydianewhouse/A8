#include "director.h"

void Director::makeSUV(Builder *builder){
    std::string engine = "SUV Engine";
    std::string seats = "5";
    std::string tripComputer = "Advanced Trip Computer";
    std::string gps = "Advanced GPS";
    builder->setEngine(engine);
    builder->setSeats(seats);
    builder->setTripComputer(tripComputer);
    builder->setGPS(gps);
}


void Director::makeSportsCar(Builder *builder){
    std::string engine = "Sports Engine";
    std::string seats = "2";
    std::string tripComputer = "Trip Computer";
    std::string gps = "Basic GPS";
    builder->setEngine(engine);
    builder->setSeats(seats);
    builder->setTripComputer(tripComputer);
    builder->setGPS(gps);
}

void Director::makeLuxuryCar(Builder *builder)
{
    std::string engine = "V8 Engine";
    std::string seats = "4";
    std::string tripComputer = "Luxury Trip Computer";
    std::string gps = "Luxury GPS";
    std::string color = "black";
    bool hasSunroof = true;

    builder->setEngine(engine);
    builder->setSeats(seats);
    builder->setTripComputer(tripComputer);
    builder->setGPS(gps);
    builder->setColor(color);
    builder->setSunroof(hasSunroof);

}