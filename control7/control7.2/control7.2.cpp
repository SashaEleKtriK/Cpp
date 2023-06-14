// control7.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Result
{
    int x1;
    double x2;
    double res;
};

Result quadraticEquation(double a, double b, double c)
{
    Result res;
    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        res.res = -1;
        return res;
    }

    if (d == 0)
    {
        double x1 = (-b) / (2 * a);
        res.res = 0;
        res.x1 = res.x2 = x1;
        return res;
    }
    if (d > 0)
    {
        double x1 = (-b + pow(d, 0.5)) / (2 * a);
        double x2 = (-b - pow(d, 0.5)) / (2 * a);
        res.res = 1;
        res.x1 = x1;
        res.x2 = x2;
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
    Result new_res = quadraticEquation(a, b, c);
    std::cout << "Result = " << new_res.res << std::endl;
    std::cout << "x1 = " << new_res.x1 << std::endl;
    std::cout << "x2 = " << new_res.x2 << std::endl;

}

