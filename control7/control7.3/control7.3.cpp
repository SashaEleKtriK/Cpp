// control7.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <tuple>
typedef std::tuple<int, double, double> Tuple;

Tuple quadraticEquation(double a, double b, double c)
{
    Tuple res;
    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        res = std::make_tuple(-1, 0, 0);
        return res;
    }

    if (d == 0)
    {
        double x1 = (-b) / (2 * a);
        res = std::make_tuple(0, x1, x1);
        return res;
    }
    if (d > 0)
    {
        double x1 = (-b + pow(d, 0.5)) / (2 * a);
        double x2 = (-b - pow(d, 0.5)) / (2 * a);
        res = std::make_tuple(1, x1, x2);
        return res;
    }
}
int main()
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
    auto new_res = quadraticEquation(a, b, c);
    std::cout << "Result = " << std::get<0>(new_res) << std::endl;
    std::cout << "x1 = " << std::get<1>(new_res) << std::endl;
    std::cout << "x2 = " << std::get<2>(new_res) << std::endl;

}
