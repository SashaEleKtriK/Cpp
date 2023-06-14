// control10.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Dot.h"
#include "Triangle.h"

int main()
{
    Triangle* t1 = new Triangle(0, 0, 0, 1, 1, 0);
    t1->printSides();
    std::cout << "Perimeter = " << t1 -> perimeter() << std::endl;
    std::cout << "Square = " << t1->square() << std::endl;
    Dot* a = new Dot(0, 0);
    Dot* b = new Dot(0, 2);
    Dot* c = new Dot(2, 0);
    Triangle* t2 = new Triangle(a, b ,c);
    t2->printSides();
    std::cout << "Perimeter = " << t2->perimeter() << std::endl;
    std::cout << "Square = " << t2->square() << std::endl;
}

