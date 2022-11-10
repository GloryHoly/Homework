#include <iostream>
#include <windows.h>
#include "Greeter.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	std::string name;
	Greeter gree;
	std::cout << "¬ведите им€:";
	std::cin >> name;
	gree.greet(name);
	
}