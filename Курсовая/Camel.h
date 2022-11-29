#include "GroundTransport.h"
#pragma once

class Camel : public GroundTransport
{
public:
	Camel(double distance) :GroundTransport(distance, "Верблюд", 10, 30, 5, 8, 8){};	
};



