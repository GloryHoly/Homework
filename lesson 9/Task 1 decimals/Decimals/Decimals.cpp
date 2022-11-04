﻿#include <iostream>


class Fraction
{
private:
	double numerator_;
	double denominator_;

public:
	Fraction(double numerator, double denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	double Abs() {return numerator_ / denominator_;	}
	bool operator==(Fraction other)
	{
		double delta = 0.001;
		if ((std::abs(Abs() - other.Abs())) < delta)
		{
			return true;
		}
		else { return false; }
	}
	bool operator!=(Fraction other) 
	{ 
		double delta = 0.001;
		if ((std::abs(Abs() - other.Abs())) < delta)
		{
			return false;
		}
		else { return true; }
	}
	bool operator<(Fraction other) { return Abs() < other.Abs(); }
	bool operator>(Fraction other) { return other < *this; }
	bool operator<=(Fraction other) { return !(*this > other); }
	bool operator>=(Fraction other) { return !(*this < other); }

};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);
	
	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
