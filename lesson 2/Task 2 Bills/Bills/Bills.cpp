#include <iostream>
#include <windows.h>
struct bill
{
    int bill_nuber;
    std::string name;
    double balan = 0;

};

void exchange_balan(bill* person, double new_balan)
{
    person->balan = new_balan;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    bill person;
    double new_balan;
    std::cout << "Введите номер счёта: ";
    std::cin >> person.bill_nuber;
    std::cout << "Введите имя владельца: ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.balan;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balan;

    exchange_balan(&person, new_balan);

std::cout << "Ваш счёт: " << person.name << ", " << person.bill_nuber << ", " << person.balan << std::endl;

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
