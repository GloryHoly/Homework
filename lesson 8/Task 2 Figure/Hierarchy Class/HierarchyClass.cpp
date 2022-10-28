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
    try
    {
        Triangle triangle(10, 20, 30, 60, 60, 60);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }

    try
    {
        TriangleRight tri_right(40, 50, 60, 50, 10);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }

    try
    {
        TriangleIsosceles triangle_isosceles(30, 80, 70, 100);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }

    try
    {
        TriangleEquilateral triangle_equilateral(10);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }



    try
    {
        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }

    try
    {
        QuadrangleRectangle rectangle(10, 20);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }

    try
    {
        Square squre(10);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }

    try
    {
        Parallelogram parallelogram(20, 30, 40, 20);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }

    try
    {
        Rhombus rhombus(20, 30, 40);
    }
    catch (const MyException& ex) { std::cout << " " << ex.what() << std::endl << std::endl; }
    
 
   return 0;
}

