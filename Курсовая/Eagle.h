#include "AirTransport.h"
#pragma once

class Eagle : public AirTransport
{
public:
	Eagle(double distance) :AirTransport(distance, "Îð¸ë", 8, 0.94) {};	
};