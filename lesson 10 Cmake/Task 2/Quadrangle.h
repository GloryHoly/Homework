#include "Figure.h"
#pragma once
class Quadrangle : public Figure
{
protected:
    int A, B, C, D,
        a, b, c, d;
    std::string name;

public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name = "Четырёхугольник");
   
    void print() override;
    
};