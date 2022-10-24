#include <iostream>
#include <windows.h>

struct adress
{
    std::string city;
    std::string street;
    int home_number;
    int flat_number;
    int index;

};

void print_adress (adress& data )
{
    std::cout << std::endl << "Ваш адресс: " << std::endl;
    std::cout << "Город: " << data.city << std::endl;
    std::cout << "Улица: " << data.street << std::endl;
    std::cout << "Номер дома: " << data.home_number << std::endl;
    std::cout << "Номер квартиры: " << data.flat_number << std::endl;
    std::cout << "Индекс: " << data.index << std::endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    adress data;   
    std::cout << "Введите Город: ";
    std::cin >> data.city;
    std::cout << "Введите Улицу: ";
    std::cin >> data.street;
    std::cout << "Введите Номер дома: ";
    std::cin >> data.home_number;
    std::cout << "Введите Номер квартиры: ";
    std::cin >> data.flat_number;
    std::cout << "Введите Индекс: ";
    std::cin >> data.index;


    print_adress (data);

    
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
