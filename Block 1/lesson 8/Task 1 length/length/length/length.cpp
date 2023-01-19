#include <iostream>
#include <windows.h>

class MaxLength : public std::exception
{
public:
    const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

int function(std::string str, int forbidden_length)
{
    if (str.length() != forbidden_length) {return str.length();}
    else { throw MaxLength(); }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    std::string str;
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    do {
        std::cout << "Введите слово: ";
        std::cin >> str;
        try
        {
            std::cout << "Длина слова \"" << str << "\" равна " << function(str, forbidden_length) << std::endl;
        }
        catch (const MaxLength& ex) { std::cout << ex.what() << std::endl; }
        catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }
    } while (str.length() != forbidden_length);

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
