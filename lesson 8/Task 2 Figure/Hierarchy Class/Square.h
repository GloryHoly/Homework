#include "Quadrangle.h"
#include "ExceptionQudrangle.h"
#pragma once

class Square : public Quadrangle
{
public:
	Square(int a) : Quadrangle(a, a, a, a, 90, 90, 90, 90, " вадрат") {}

};