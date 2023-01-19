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
    if (A + B + C != 180)
    {
        Triangle::print();
        throw MyException("Не был создан. Причина: сумма углов не равна 180");        
    }
    else { Triangle::print(); std::cout << " Создан" << std::endl << std::endl; }
}


void Triangle::print()
{
    std::cout << name << "(cтороны: " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ")";    
}



