#include "clientcode.h"
#include <iostream>


int main(){
    Director *director = new Director();
    //ClientCode1(*director);
    //ClientCode2(*director);
    //ClientCode3(*director);
    auto [luxuryCar, luxuryManual] = ClientCode4(*director);
    ClientCode4(*director);
    std::cout << "Hello\n";
    std::cout << luxuryCar->engine << "\n";

    delete director;
}

