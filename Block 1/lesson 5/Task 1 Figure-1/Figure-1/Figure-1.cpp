#include <iostream>
#include <windows.h>

class Figure
{
    private:
        int sides_count;
        std::string name;
    public:
        Figure()
        {
            sides_count = 0;
            name = "Фигура";
        }
        
        Figure(int sides, std::string name_figure) 
    {
        sides_count = sides;
        name = name_figure;
    }
        
    int get_sides_count() {return sides_count;}
    std::string get_name(){ return name; }

};

class Triangle : public Figure
{
public:
    Triangle() :Figure(3, "Треугольник") {}
        
};

class Quadrangle : public Figure
{
public:
    Quadrangle() :Figure(4, "Четырёхугольник"){}
   
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон: " << std::endl;
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;



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
