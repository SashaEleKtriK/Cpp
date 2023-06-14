

#include <iostream>

double cubicPow(double num)
{
    double result = pow(num, 1.0 / 3);
    return result;
}
double cubicIterational(double num)
{
    bool isAboveZero = true;
    if (num < 0)
    {
        num = -num;
        isAboveZero = false;
    }
    bool isMore = false;
    double x0 = 0;
    while (!isMore)
    {
        if (num < x0 * x0 * x0)
        {
            isMore = true;
        }
        else
        {
            x0 += 1;
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        x0 = (1.0 / 3) * (num / (x0 * x0) + 2 * x0);
    }
    if (!isAboveZero)
    {
        x0 = -x0;
    }
    return x0;                      
    
}

int main()
{

    std::cout << "Enter num\n";
    double num;
    std::cin >> num;
    std::cout << "Pow func result - " << cubicPow(num) << "\nIntarational func result - " << cubicIterational(num) << std::endl;
    main();
}

