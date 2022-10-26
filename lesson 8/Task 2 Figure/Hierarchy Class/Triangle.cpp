#include "Triangle.h"
#include "Exception.h"

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
    std::cout << name << "(c������: " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ")";
    if (A + B + C == 180)
    {
        std::cout << " ������" << std::endl << std::endl;
    }else { throw MyException(); }
}



