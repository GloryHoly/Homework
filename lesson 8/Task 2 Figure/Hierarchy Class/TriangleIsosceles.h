#include "Triangle.h"
#include "Exception.h"
#pragma once

class TriangleIsosceles : public Triangle
{
public:

    TriangleIsosceles(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A, "Равнобедренный треугольник") {}

};
