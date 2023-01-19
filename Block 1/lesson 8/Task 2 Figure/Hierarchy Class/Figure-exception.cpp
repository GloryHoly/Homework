#include "Figure.h"
#include <windows.h>
#include "Triangle.h"
#include "TriangleRight.h"
#include "TriangleIsosceles.h"
#include "TriangleEquilateral.h"
#include "Quadrangle.h"
#include "QuadrangleRectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Triangle triangle(10, 20, 30, 45, 60, 40);
    TriangleRight tri_right(40, 50, 60, 50, 10);
    TriangleIsosceles triangle_isosceles(30, 80, 70, 100);
    TriangleEquilateral triangle_equilateral(10);
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    QuadrangleRectangle rectangle(10, 20);
    Square squre(10);
    Parallelogram parallelogram(20, 30, 40, 20);
    Rhombus rhombus(20, 30, 40);

    triangle.print();
    tri_right.print();
    triangle_isosceles.print();
    triangle_equilateral.print();
    quadrangle.print();
    rectangle.print();
    squre.print();
    parallelogram.print();
    rhombus.print();

    return 0;
}

