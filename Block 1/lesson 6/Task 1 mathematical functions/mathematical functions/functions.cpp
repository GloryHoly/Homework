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
		std::cout << a << " прибавить " << b << " = " << sum(a, b) << std::endl;
		break;
	case 2:
		std::cout << a << " вычесть " << b << " = " << subtract(a, b) << std::endl;
		break;
	case 3:
		std::cout << a << " умножить на " << b << " = " << multiply(a, b) << std::endl;
		break;
	case 4:
		std::cout << a << " делить на " << b << " = " << div(a, b) << std::endl;
		break;
	case 5:
		std::cout << a << " в степени " << b << " = " << degree(a, b) << std::endl;
		break;
	default:
		std::cout << "Несуществующая операция" << std::endl;
		break;
	}
}



