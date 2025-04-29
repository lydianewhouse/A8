#pragma once
#include <string>
#include "builder.h"

class Director{
    public:
    void makeSUV(Builder *builder);
    void makeSportsCar(Builder *builder);
    void makeLuxuryCar(Builder *builder);
};