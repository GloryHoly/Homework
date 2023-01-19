#include "Exception.h"
#include "Triangle.h"
#pragma once

class TriangleRight : public Triangle
{
public:

    TriangleRight(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник") {}

};