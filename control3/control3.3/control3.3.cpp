// control3.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

double square(double a, double b, double c)
{
    int p = (a + b + c) / 2;
    double s_sq = p * (p - a) * (p - b) * (p - c);
    double s = pow(s_sq, 0.5);
    return s;
}
double square(double a)
{
    int p = a * 3 / 2;
    double s_sq = p * (p - a) * (p - a) * (p - a);
    double s = pow(s_sq, 0.5);
    return s;
}

int main()
{
    std::cout << "Print '0' if it's equilateral triangle and print '1' if it's scalene triangle\n";
    int isEquilateral;
    std::cin >> isEquilateral;
    if (isEquilateral == 0)
    {
        std::cout << "Enter A\n";
        double a;
        std::cin >> a;
        std::cout << "Square\n" << square(a) << std::endl;
    }
    if (isEquilateral == 1)
    {
        std::cout << "Enter A\n";
        double a;
        std::cin >> a;
        std::cout << "Enter B\n";
        double b;
        std::cin >> b;
        std::cout << "Enter C\n";
        double c;
        std::cin >> c;
        std::cout << "Square\n" << square(a, b, c) << std::endl;
    }
    main();
}

