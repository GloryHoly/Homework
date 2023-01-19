#include "Quadrangle.h"
#include "Exception.h"
#pragma once

class QuadrangleRectangle : public Quadrangle
{
public:
    QuadrangleRectangle(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90, "Прямоугольник") {}

};