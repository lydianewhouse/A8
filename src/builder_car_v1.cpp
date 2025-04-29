// //builder_car_v1.h
// //Builder
// #include <iostream>
// #include <string>
// class Car{
//     public:
//     std::string engine, seats, tripComputer, gps;
//     void listFeatures() const{
//     std::cout << "Car Features:";
//     std::cout << "\n Engine: " << engine;
//     std::cout << "\n Seats: " << seats;
//     std::cout << "\n tripComputer: " << tripComputer;
//     std::cout << "\n GPS: " << gps << "\n";
//     }
// };


// class Manual{
//     public:
//     std::string engine, seats, tripComputer, gps;
//     void listFeatures() const{
//     std::cout << "Manual Features: ";
//     std::cout << "\n Engine: " << engine;
//     std::cout << "\n Seats: " << seats;
//     std::cout << "\n TripComputer: " << tripComputer;
//     std::cout << "\n GPS: " << gps << "\n";
//     }
// };


// //Builder: create Car and Manual
// class Builder{
//     public:
//     virtual ~Builder(){}
//     virtual void setEngine(std::string &engine) = 0;
//     virtual void setSeats(std::string &seats) = 0;
//     virtual void setTripComputer(std::string &tripCompueter) = 0;
//     virtual void setGPS(std::string &gps) = 0;
//     virtual void reset() = 0;
// };


// //ConcreteBuilder: specific implementation of building steps
// //We may have several variation of Builders, implemented differently
// //------------CarBuilder---------------------
// class CarBuilder : public Builder{
//     private:
//     Car *car;
//     public:
//     //Fresh builder should contain blank car
//     CarBuilder(){this->reset();}
//     ~CarBuilder(){delete car;}
//     void reset() override {this->car = new Car();}
//     //Production steps with same car instance
//     void setEngine(std::string &engine) override;
//     void setSeats(std::string &seats) override;
//     void setTripComputer(std::string &tripComputer) override;
//     void setGPS(std::string &gps) override;
//     Car* GetProduct();
// };


// void CarBuilder::setEngine(std::string &engine){
//     this->car->engine = engine;
// }


// void CarBuilder::setSeats(std::string &seats){
//     this->car->seats = seats;
// }


// void CarBuilder::setTripComputer(std::string &tripComputer){
//     this->car->tripComputer = tripComputer;
// }


// void CarBuilder::setGPS(std::string &gps){
//     this->car->gps = gps;
// }


// // smart pointers may be better
// Car* CarBuilder::GetProduct(){
//     Car *result = this->car;
//     this->reset();
//     return result;
// }


// //------------ManualBuilder---------------------
// class ManualBuilder : public Builder{
//     private:
//     Manual *manual;
//     public:
//     //Fresh builder should contain blank car
//     ManualBuilder(){this->reset();}
//     ~ManualBuilder(){delete manual;}
//     void reset() override {this->manual = new Manual();}
//     //Production steps with same car instance
//     void setEngine(std::string &engine) override;
//     void setSeats(std::string &seats) override;
//     void setTripComputer(std::string &tripComputer) override;
//     void setGPS(std::string &gps) override;
//     // smart pointers may be better
//     Manual* GetProduct();
// };


// void ManualBuilder::setEngine(std::string &engine) {
//     this->manual->engine = engine;
// }


// void ManualBuilder::setSeats(std::string &seats) {void setEngine(std::string &engine) override;


// void setSeats(std::string &seats) override;


// void setTripComputer(std::string &tripComputer) override;


// void setGPS(std::string &gps) override;


// Car* GetProduct();
// };

// void CarBuilder::setEngine(std::string &engine){
//     this->car->engine = engine;
// }


// void CarBuilder::setSeats(std::string &seats){
//     this->car->seats = seats;
// }


// void CarBuilder::setTripComputer(std::string &tripComputer){
//     this->car->tripComputer = tripComputer;
// }


// void CarBuilder::setGPS(std::string &gps){
//     this->car->gps = gps;
// }


// // smart pointers may be better
// Car* CarBuilder::GetProduct(){
//     Car *result = this->car;
//     this->reset();
//     return result;
// }


// //------------ManualBuilder---------------------
// class ManualBuilder : public Builder{
//     private:
//     Manual *manual;
//     public:
//     //Fresh builder should contain blank car
//     ManualBuilder(){this->reset();}
//     ~ManualBuilder(){delete manual;}
//     void reset() override {this->manual = new Manual();}
//     //Production steps with same car instance
//     void setEngine(std::string &engine) override;
//     void setSeats(std::string &seats) override;
//     void setTripComputer(std::string &tripComputer) override;
//     void setGPS(std::string &gps) override;
//     // smart pointers may be better
//     Manual* GetProduct();
// };


// void ManualBuilder::setEngine(std::string &engine) {
//     this->manual->engine = engine;
// }


// void ManualBuilder::setSeats(std::string &seats) {
//     this->manual->seats = seats;
// }


// void ManualBuilder::setTripComputer(std::string &tripComputer){
//     this->manual->tripComputer = tripComputer;
// }


// void ManualBuilder::setGPS(std::string &gps){
//     this->manual->gps = gps;
// }


// // smart pointers may be better
// Manual* ManualBuilder::GetProduct(){
//     Manual *result = this->manual;
//     this->reset();
//     return result;
// }


// //---------------------Directory-------------------
// // Director works with any builder that client passes
// class Director{
//     public:
//     void makeSUV(Builder *builder);
//     void makeSportsCar(Builder *builder);
// };

// void Director::makeSUV(Builder *builder){
//     std::string engine = "SUV Engine";
//     std::string seats = "5";
//     std::string tripComputer = "Advanced Trip Computer";
//     std::string gps = "Advanced GPS";
//     builder->setEngine(engine);
//     builder->setSeats(seats);
//     builder->setTripComputer(tripComputer);
//     builder->setGPS(gps);
// }


// void Director::makeSportsCar(Builder *builder){
//     std::string engine = "Sports Engine";
//     std::string seats = "2";
//     std::string tripComputer = "Trip Computer";
//     std::string gps = "Basic GPS";
//     builder->setEngine(engine);
//     builder->setSeats(seats);
//     builder->setTripComputer(tripComputer);
//     builder->setGPS(gps);
// }


// /*
// Client Code: creates builder object
// Passes to director and initiates
// construction process
// End result is retrieved from the builder object.
// */
// // smart pointers can be used
// void ClientCode1(Director &director){
//     CarBuilder *cbuilder = new CarBuilder();
//     ManualBuilder *mbuilder = new ManualBuilder();
//     std::cout << "SUV Car:\n";
//     director.makeSUV(cbuilder);
//     Car *suvCar = cbuilder->GetProduct();
//     suvCar->listFeatures(); // use
//     delete suvCar;
//     director.makeSUV(mbuilder);
//     Manual *suvManual = mbuilder->GetProduct();
//     suvManual->listFeatures(); // use
//     delete suvManual;
//     delete cbuilder;
//     delete mbuilder;
// }


// // smart pointers can be used
// void ClientCode2(Director &director){
//     CarBuilder *cbuilder = new CarBuilder();
//     ManualBuilder *mbuilder = new ManualBuilder();
//     std::cout << "Sports Car:\n";
//     director.makeSportsCar(cbuilder);
//     Car *sportsCar = cbuilder->GetProduct();
//     sportsCar->listFeatures(); // use
//     delete sportsCar;
//     director.makeSportsCar(mbuilder);
//     Manual *sportsManual = mbuilder->GetProduct();
//     sportsManual->listFeatures(); // use
//     delete sportsManual;
//     delete cbuilder;
//     delete mbuilder;
// }


// // smart pointers can be used
// void ClientCode3(Director &director){
//     CarBuilder *cbuilder = new CarBuilder();
//     ManualBuilder *mbuilder = new ManualBuilder();
//     //Builder Pattern can be used without Director Class
//     std::cout << "Custom Product:\n";
//     std::string engine = "Custom Engine";
//     std::string seats = "4";
//     cbuilder->setEngine(engine);
//     cbuilder->setSeats(seats);
//     mbuilder->setEngine(engine);
//     mbuilder->setSeats(seats);// smart pointers can be used
// }
    
//     void ClientCode1(Director &director){
//     CarBuilder *cbuilder = new CarBuilder();
//     ManualBuilder *mbuilder = new ManualBuilder();
//     std::cout << "SUV Car:\n";
//     director.makeSUV(cbuilder);
//     Car *suvCar = cbuilder->GetProduct();
//     suvCar->listFeatures(); // use
//     delete suvCar;
//     director.makeSUV(mbuilder);
//     Manual *suvManual = mbuilder->GetProduct();
//     suvManual->listFeatures(); // use
//     delete suvManual;
//     delete cbuilder;
//     delete mbuilder;
// }


// // smart pointers can be used
// void ClientCode2(Director &director){
//     CarBuilder *cbuilder = new CarBuilder();
//     ManualBuilder *mbuilder = new ManualBuilder();
//     std::cout << "Sports Car:\n";
//     director.makeSportsCar(cbuilder);
//     Car *sportsCar = cbuilder->GetProduct();
//     sportsCar->listFeatures(); // use
//     delete sportsCar;
//     director.makeSportsCar(mbuilder);
//     Manual *sportsManual = mbuilder->GetProduct();
//     sportsManual->listFeatures(); // use
//     delete sportsManual;
//     delete cbuilder;
//     delete mbuilder;
// }


// // smart pointers can be used
// void ClientCode3(Director &director){
//     CarBuilder *cbuilder = new CarBuilder();
//     ManualBuilder *mbuilder = new ManualBuilder();
//     //Builder Pattern can be used without Director Class
//     std::cout << "Custom Product:\n";
//     std::string engine = "Custom Engine";
//     std::string seats = "4";
//     cbuilder->setEngine(engine);
//     cbuilder->setSeats(seats);
//     mbuilder->setEngine(engine);
//     mbuilder->setSeats(seats);
//     Car *customCar = cbuilder->GetProduct();
//     Manual *manualCar = mbuilder->GetProduct();
//     customCar->listFeatures();
//     manualCar->listFeatures();
//     delete customCar;
//     delete manualCar;
//     delete cbuilder;
//     delete mbuilder;
// }


// int main(){
//     Director *director = new Director();
//     ClientCode1(*director);
//     ClientCode2(*director);
//     ClientCode3(*director);
//     delete director;
// }
// /*
// SUV Car:
// Car Features:
// Engine: SUV Engine
// Seats: 5
// tripComputer: Advanced Trip Computer
// GPS: Advanced GPS
// Manual Features:
// Engine: SUV Engine
// Seats: 5
// TripComputer: Advanced Trip Computer
// GPS: Advanced GPS
// Sports Car:
// Car Features:
// Engine: Sports Engine
// Seats: 2
// tripComputer: Trip Computer
// GPS: Basic GPS
// Manual Features:
// Engine: Sports Engine
// Seats: 2
// TripComputer: Trip Computer
// GPS: Basic GPS
// Custom Product:
// Car Features:
// Engine: Custom Engine
// Seats: 4
// tripComputer:
// GPS:
// Manual Features:
// Engine: Custom Engine
// Seats: 4
// TripComputer:
// GPS:
// */
