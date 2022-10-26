#include "Figure.h"
#include "Exception.h"

#pragma once

class Triangle : public Figure
{
protected:
    int A, B, C,
        a, b, c;
    std::string name;

public:
    Triangle(int a, int b, int c, int A, int B, int C, std::string name = "Треугольник");
    void print() override;
    
};
