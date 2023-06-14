
#include <iostream>
int quadraticEquation(double a, double b, double c, double& x1, double& x2)
{
    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        return -1;
    }

    if (d == 0)
    { 
        x1 = x2 = (-b) / (2 * a);
        return 0;
    }
    if (d > 0)
    {
        x1 = (-b + pow(d, 0.5)) / (2 * a);
        x2 = (-b - pow(d, 0.5)) / (2 * a);
        return 1;
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
    double x1 = 0;
    double x2 = 0 ;
    std::cout << "Result: " << quadraticEquation(a, b, c, x1, x2) << ";  x1 = " << x1 << "; x2 = " << x2 << std::endl;
}

