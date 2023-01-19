#include "Quadrangle.h"
#include "Exception.h"
#pragma once

class Rhombus : public Quadrangle
{
public:
    Rhombus(int a, int A, int B) : Quadrangle(a, a, a, a, A, B, A, B, "Ромб") {}

};