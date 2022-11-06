#include "Quadrangle.h"



Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = name;
    }
    void Quadrangle::print()
    {
        std::cout << name << ":\n" << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl << std::endl;
    }
