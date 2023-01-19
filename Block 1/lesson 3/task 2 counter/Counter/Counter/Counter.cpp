#include <iostream>
#include <windows.h>

class counter
{
private:
     int num; 

public:
    
    char command1;
    char command2;
    char command3;
    char command4;

    counter()
    {
        command1 = '+';
        command2 = '-';
        command3 = '=';
        command4 = 'x';
    }
    
    bool question(std::string q)
    {
        if (q == "да" || q == "Да")
        {
            num = 1;
            return true;
        }
        else { return false; }
    }
    void set_num(int num)
    {
        this->num = num;
    }
    int sum() { return num++; }
    int diff() { return num--; }
    int get_result() { return num; }
   
};




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    counter counter;
    std::string q;
    int num;
    char command;
    bool ex = true;

std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
std::cin >> q;

if (counter.question(q))
{
    std::cout << "Введите начальное значение счётчика: ";
    std::cin >> num;
    counter.set_num(num);
}
else {
    std::cout << "До свидания ";
    ex = false;
}
    

do {
   
    if (ex) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        if (counter.command1 == command)
        {
            counter.sum();
        }
        else if (counter.command2 == command)
        {
            counter.diff();
        }
        else if (counter.command3 == command)
        {
            counter.get_result();
            std::cout << counter.get_result() << std::endl;
        }
        else if (counter.command4 == command)
        {
            std::cout << "До свидания ";
            ex = false;
        }
    }
} while (ex);


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
