#include <cmath>
#include "functions.h"
#include <iostream>

double sum(double a, double b) { return a + b; }
double subtract(double a, double b){ return a - b; }
double multiply(double a, double b) { return a * b; }
double div(double a, double b) { return a / b; }
double degree(double a, double b) { return pow(a,b); }
void print(double a, double b, int c)
{
	switch(c)
	{
	case 1:
		std::cout << a << " ��������� " << b << " = " << sum(a, b) << std::endl;
		break;
	case 2:
		std::cout << a << " ������� " << b << " = " << subtract(a, b) << std::endl;
		break;
	case 3:
		std::cout << a << " �������� �� " << b << " = " << multiply(a, b) << std::endl;
		break;
	case 4:
		std::cout << a << " ������ �� " << b << " = " << div(a, b) << std::endl;
		break;
	case 5:
		std::cout << a << " � ������� " << b << " = " << degree(a, b) << std::endl;
		break;
	default:
		std::cout << "�������������� ��������" << std::endl;
		break;
	}
}



