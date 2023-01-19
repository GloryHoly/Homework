#include "GroundTransport.h"
#pragma once

class TurboCamel : public GroundTransport
{
public:
	TurboCamel(double distance) : GroundTransport(distance, "Верблюд-быстроход", 40, 10, 5, 6.5, 8){}
};
