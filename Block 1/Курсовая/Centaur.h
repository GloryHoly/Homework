#include "GroundTransport.h"
#pragma once

class Centaur : public GroundTransport
{
public:
	Centaur(double distance) : GroundTransport(distance, "�������", 15, 8, 2, 2, 2) {}
};
