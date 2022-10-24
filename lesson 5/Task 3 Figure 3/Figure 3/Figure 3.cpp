#include <iostream>
#include <windows.h>
#include <string>

class Figure
{
protected:
    int sides;
    std::string name;    
public:   
    Figure() 
    {
        sides = 0;
        name = "Фигура";       
    }
public:
    
    virtual void print()
    {
        std::string  right_not = "Правильная";
        std::cout << name <<"\n" << right_not << "\nКоличество сторон: " << sides << std::endl << std::endl;
    };
    
    virtual bool check_figure() 
    { return true; };
};

class Triangle : public Figure
{
protected:
    int A, B, C,
        a, b, c;    
    const int sides = 3;
public:
    

    Triangle(int a, int b, int c, int A, int B, int C, std::string name = "Треугольник:")
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;         
        this->name = name;        
    }
   
   bool check_figure() override
    {
        if (A + B + C == 180) {return true;}
        else{return false;}
   }
  
    void print() override
    {
        std::string right_not;
        if (check_figure()) {right_not = "Правильная";}
        else { right_not = "Неправильная"; }

        std::cout << name << "\n" << right_not << "\nСтороны: a = " << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl << std::endl;
    }


};

class TriangleRight : public Triangle
{
public:

    TriangleRight(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник:") {}
   
 };

class TriangleIsosceles : public Triangle
{
public:

    TriangleIsosceles(int a, int b,int A, int B) : Triangle(a, b, a, A, B, A, "Равнобедренный треугольник:" ){}
   
  };

class TriangleEquilateral : public Triangle
{
public:
    TriangleEquilateral(int a) : Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник:" ){}
};

class Quadrangle : public Figure
{
protected:
    int A, B, C, D,
        a, b, c, d; 
    const int sides = 4;

public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name = "Четырёхугольник:")
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = name;
    }

    bool check_figure() override
    {
        if (A + B + C + D == 360) { return true; }
        else { return false; }
    }
    void print() override
    {
        std::string right_not;
        if (check_figure()) { right_not = "Правильная"; }
        else { right_not = "Неправильная"; }

        std::cout << name << "\n" << right_not << "\nСтороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Количество сторон: " << sides << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl << std::endl;
    }
};

class QuadrangleRectangle : public Quadrangle
{
public:
    QuadrangleRectangle(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90, "Прямоугольник:"){}
  
};

class Square : public Quadrangle
{
public:
    Square(int a) : Quadrangle(a, a, a, a, 90, 90, 90, 90, "Квадрат:" ){}
   
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B, "Параллелограмм:"){}
   
};

class Rhombus : public Quadrangle
{
public:
    Rhombus(int a, int A, int B) : Quadrangle(a, a, a, a, A, B, A, B, "Ромб:"){}

};

namespace figure
{
    void print(Figure* figure)
    {
        figure->print();
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    
    Figure figure;
    Triangle triangle(10, 20, 30, 500, 50, 60);
    TriangleRight tri_right(40, 50, 60, 50, 40);
    TriangleIsosceles triangle_isosceles(30, 80, 70, 40);
    TriangleEquilateral triangle_equilateral(10);
    Quadrangle quadrangle(10, 20, 30, 40, 10, 80, 100, 80);
    QuadrangleRectangle rectangle(10, 20);
    Square squre(10);
    Parallelogram parallelogram(20, 30, 20, 40);
    Rhombus rhombus(20, 100, 80);

    figure::print(&figure);
    figure::print(&triangle);
    figure::print(&tri_right);
    figure::print(&triangle_isosceles);
    figure::print(&triangle_equilateral);
    figure::print(&quadrangle);
    figure::print(&rectangle);
    figure::print(&squre);
    figure::print(&parallelogram);
    figure::print(&rhombus);
    
};


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
