#pragma once
#include "director.h"
#include "manualbuilder.h"
#include "carbuilder.h"
#include <utility>

void ClientCode1(Director &director);

void ClientCode2(Director &director);

void ClientCode3(Director &director);

std::pair<Car*, Manual*> ClientCode4(Director& director);

