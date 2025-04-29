#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "builder.h"
#include "car.h"
#include "manual.h"
#include "director.h"
#include "clientcode.h"

TEST_CASE("ClientCode4 Luxury Car and Manual Test", "[ClientCode4]") {
    Director *director = new Director();
    auto [luxuryCar, luxuryManual] = ClientCode4(*director);
    // Assert Car Features
    REQUIRE(luxuryCar->engine == "V8 Engine");
    REQUIRE(luxuryCar->seats == "4");
    REQUIRE(luxuryCar->tripComputer == "Luxury Trip Computer");
    REQUIRE(luxuryCar->gps == "Luxury GPS");
    REQUIRE(luxuryCar->color == "black");
    REQUIRE(luxuryCar->hasSunroof == true);
    // Assert Manual Features
    REQUIRE(luxuryManual->engine == "V8 Engine");
    REQUIRE(luxuryManual->seats == "4");
    REQUIRE(luxuryManual->tripComputer == "Luxury Trip Computer");
    REQUIRE(luxuryManual->gps == "Luxury GPS");
    REQUIRE(luxuryManual->color == "black");
    REQUIRE(luxuryManual->hasSunroof == true);
    // Clean up
    delete luxuryCar;
    delete luxuryManual;
    delete director;
}

