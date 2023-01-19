#include <iostream>
#include <windows.h>
#include "Counter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Counter counter;
    std::string q;
    int num = 1;
    char command;
    bool exit = true;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> q;
    if (question(q))
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> num;
        }else { std::cout << "\nДо свидания " << std::endl << std::endl; }
    
    counter.set_num(num);
    while (question(q) && exit) 
    {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> command;
            if (counter.command1 == command)
            {
                counter.get_sum();
            }
            else if (counter.command2 == command)
            {
                counter.get_diff();
            }
            else if (counter.command3 == command)
            {
                counter.get_result();
                std::cout << counter.get_result() << std::endl;
            }
            else if (counter.command4 == command)
            {
                std::cout << "До свидания ";
                exit = false;
            }
        
    } 

    return 0;

}

