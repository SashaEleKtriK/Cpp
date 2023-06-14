// CONTROL1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

void printPoint(std::vector<int>& point)
{
    std::cout << "[" << point[0] << "," << point[1]
        << "]" << std::endl;
}
void printFigure(std::vector<std::vector<int>> figure)
{
    for (auto point : figure)
    {
        printPoint(point);
    } 
}


int main()
{
    int n;
    std::cout << "How much points?\n";
    std::cin >> n;
    std::cout << "Enter the coordinates\n";
    std::vector<std::vector<int>> figure;
    for (int i = 1; i < (n + 1); i++)
    {
        std::vector<int> point;
        int x;
        int y;
        std::cout << i << " point x\n";
        std::cin >> x;
        std::cout << i << " point y\n";
        std::cin >> y;
        point.push_back(x);
        point.push_back(y);
        figure.push_back(point);
    }
    printFigure(figure);
    int sum_1 = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        sum_1 += figure[i][0] * figure[i + 1][1];
    }
    int sum_2 = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        sum_2 += figure[i + 1][0] * figure[i][1];
    }
    int double_square;
    double_square = (sum_1 + (figure[n-1][0] * figure[0][1])
        - sum_2 - (figure[0][0] * figure[n-1][1]));
    double square = double_square / 2.0;
    if (square < 0)
    {
        square = -square;
    }
    std::cout << "Square of figure: " << square;
}
