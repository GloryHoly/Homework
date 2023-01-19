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
        if (A + B + C + D != 360)
        {
            Quadrangle::print();
            throw MyException("�� ��� ������. �������: ����� ����� �� ����� 360");
        }
        else { Quadrangle::print(); std::cout << " ������" << std::endl << std::endl; }
    }
    void Quadrangle::print()
    {
        std::cout << name << "(c������: " << a << ", " << b << ", " << c << ", " << d << "; ���� " << A << ", " << B << ", " << C << ", " << D << ")";
        
    }
