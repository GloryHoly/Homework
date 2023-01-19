#include <iostream>
#include <windows.h>
#include "functions.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
   
    double a,b,c;    
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    do
    {   std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> c;
        print(a, b, c);
    }while (c <= 0 || c > 5 );
    
   return 0;
}

