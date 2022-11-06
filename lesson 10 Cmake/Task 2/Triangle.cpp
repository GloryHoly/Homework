#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name) 
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = name;
}

void Triangle::print()
{
    std::cout << name << "\nСтороны: a = " << a << " b = " << b << " c = " << c << std::endl;
    std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl << std::endl;
}


