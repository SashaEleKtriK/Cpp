

#include <iostream>
#include <string>

bool transpositionSearch(int mas[], int searching, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (searching == mas[i])
        {
            if (i == 0)
            {
                return true;
            }
            else
            {
                mas[i] = mas[i - 1];
                mas[i - 1] = searching;
                return true;
            }
            
        }
    }
    return false;
}
void program(int mas[],const int size)
{
    for (int i = 0;i < size; i++) //Вывод результата.
        std::cout << mas[i] << " ";
    std::cout << std::endl;
    std::cout << "enter searching num\n";
    int searching;
    std::cin >> searching;
    if (transpositionSearch(mas, searching, size))
    {
        std::cout << "Found" << std::endl;
    }
    else
    {
        std::cout << "Not Found" << std::endl;
    }
    program(mas, size);
}

int main()
{
    int mas[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 55, -13 };
    int a = sizeof(mas);
    int b = sizeof(mas[0]);
    int size = a / b;
    program(mas, size);
}
