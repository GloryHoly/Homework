#include "AirTransport.h"
#pragma once

class Eagle : public AirTransport
{
public:
	Eagle(double distance) :AirTransport(distance, "���", 8, 0.94) {};	
};