#include "AirTransport.h"
#pragma once

class CarpetPlane : public AirTransport
{
public:
	CarpetPlane(double distance) :AirTransport(distance, "Ковёр Самолёт", 10, 1)
	{
		if (distance >= 1000 && distance < 5000) { coefficient = 0.97; }
		if (distance >= 5000 && distance < 10000) { coefficient = 0.9; }
		if (distance >= 10000) { coefficient = 0.95; }
	};
};
