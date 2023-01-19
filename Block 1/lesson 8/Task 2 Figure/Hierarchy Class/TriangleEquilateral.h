#include "Triangle.h"
#include "Exception.h"
#pragma once

class TriangleEquilateral : public Triangle
{
public:
    TriangleEquilateral(int a) : Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник") {}

};