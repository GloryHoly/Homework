#include "GroundTransport.h"
#pragma once

class Boots : public GroundTransport
{
public:
	Boots(double distance) : GroundTransport(distance, "�������-���������", 6, 60, 10, 5, 5) {}
};
