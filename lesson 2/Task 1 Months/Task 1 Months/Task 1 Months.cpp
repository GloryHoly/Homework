#include <iostream>
enum class months 
{
    january = 1,
    february,
    marth,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

void mounth_name(months month)
{
    switch (month)
    {
    case months::january:
        std::cout << "Январь" << std::endl;
        break;
    case months::february:
        std::cout << "Февраль" << std::endl;
        break;
    case months::marth:
        std::cout << "Март" << std::endl;
        break;
    case months::april:
        std::cout << "Апрель" << std::endl;
        break;
    case months::may:
        std::cout << "Май" << std::endl;
        break;
    case months::june:
        std::cout << "Июнь" << std::endl;
        break;
    case months::july:
        std::cout << "Июль" << std::endl;
        break;
    case months::august:
        std::cout << "Август" << std::endl;
        break;
    case months::september:
        std::cout << "Сентябрь" << std::endl;
        break;
    case months::october:
        std::cout << "Октябрь" << std::endl;
        break;
    case months::november:
        std::cout << "Ноябрь" << std::endl;
        break;
    case months::december:
        std::cout << "Декабрь" << std::endl;
        break;
    default:
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int month_number;
        
    do
    {
        std::cout << "Введите номер месяца:";
        std::cin >> month_number;
        if (month_number > 12 || month_number < 0)
        {
            std::cout << "Неправильный номер!" << std::endl;
        }
        else if (month_number == 0)
        {
            std::cout << "До свидания!" << std::endl;
        }
        else
        {
            mounth_name(static_cast<months>(month_number));
        }
    } while (month_number != 0);
    
    
    
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
