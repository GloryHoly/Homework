#include "AirTransport.h"
#pragma once

class Broom : public AirTransport
{
public:
	Broom(double distance) :AirTransport(distance, "Метла", 20, 1)
	{
		for (int i = 1000; i <= distance ; i += 1000)	
		{
			if(distance >= 1000){ coefficient -= 0.01; }
		}
	};
};
