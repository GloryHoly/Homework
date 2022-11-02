#include <iostream>
#include <windows.h>#

class Fraction
{
private:
	int num_;
	int denom_;

 public:
	Fraction(double num, double denom)
	{
		num_ = num;
		denom_ = denom;
	}
	
	Fraction operator+(Fraction other)
	{ 
		return Fraction((num_ * other.denom_ + other.num_ * denom_), (denom_ * other.denom_));		
	}
	Fraction operator-(Fraction other)
	{
		return Fraction(( num_ * other.denom_ - other.num_ * denom_ ), (denom_ * other.denom_));
	}
	Fraction operator*(Fraction other)
	{
		return Fraction((num_ * other.num_), (denom_ * other.denom_));
	}

	Fraction operator/(Fraction other)
	{
		if (denom_ != 0 && other.denom_ != 0){ return Fraction((num_ * other.denom_), (denom_ * other.num_)); }
		
	}
	Fraction operator-() { return Fraction (-num_, denom_) ; }

	Fraction& operator++() 
	{
		this->num_ = denom_ + num_;
		return *this;
	}
	
	Fraction operator--(int)
	{
		Fraction temp = *this;
		this->num_ = num_ - denom_;
		return temp;
	}

	void print()
	{
		int i, less;
		do {
			if (num_ < denom_ < 0)
				less = num_;
			else
				less = denom_;
			for (i = less; i > 0; i--) {
				if (!(num_ % i) && !(denom_ % i)) {
					num_ /= i;
					denom_ /= i;
					break;
				}
			}
		} while (i != 1);
		std::cout << num_ << "/" << denom_;
	}
	
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

	
	int num1, denom1, num2, denom2;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denom1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> num2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denom2;
	Fraction f1(num1, denom1);
	Fraction f2(num2, denom2);
	Fraction sum = f1 + f2;
	Fraction dif = f1 - f2;
	Fraction multip = f1 * f2;
	Fraction division = f1 / f2;
	Fraction unar1 = -f1;
	Fraction unar2 = -f2;
	Fraction inkr = ++f1 * f2;
	
	



	std::cout <<"\n" << num1 << "/" << denom1 << " + " << num2 << "/" << denom2 << " = ";
	sum.print();
	std::cout << "\n" << num1 << "/" << denom1 << " - " << num2 << "/" << denom2 << " = ";
	dif.print();
	std::cout << "\n" << num1 << "/" << denom1 << " * " << num2 << "/" << denom2 << " = ";
	multip.print();
	std::cout << "\n" << num1 << "/" << denom1 << " * " << num2 << "/" << denom2 << " = ";
	division.print();
	std::cout <<"\nУнарный минус дробей " << num1 << "/" << denom1 << " и " << num2 << "/" << denom2 << " = ";
	unar1.print(); std::cout << " и "; unar2.print();
	std::cout << "\n++" << num1 << "/" << denom1 << " * " << num2 << "/" << denom2 << " = ";
	inkr.print();
	std::cout << "\nЗначение дроби 1: "; f1.print(); std::cout <<std::endl;
	f1.print();
	Fraction dekr = (f1--) * f2;
	std::cout << "-- * " << num2 << "/" << denom2 << " = ";
	dekr.print();
	std::cout << "\nЗначение дроби 1: "; f1.print(); std::cout << std::endl;
	
		
	
    
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
