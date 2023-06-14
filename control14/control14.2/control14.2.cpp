﻿// control14.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <vector>
#include <string>
#include <iostream>
template <class Container>
std::string Print(const Container  &cont, std::string d)
{
    std::string result;
    std::string text;
    for (const auto &i : cont)
         
    {
        text = std::to_string(i);
        if (result.empty())
        {
            result = text;
        }
        else
        {
            result = result + d + text;
        }

    }
    std::cout << result << std::endl;
    return result;
}
int main()
{
    std::vector<int> data = { 1, 2, 3 };
    int arr1[] = { 9,3,17,6,5,4,31,2,12 };
    Print(arr1, ", "); 
    Print(data, " - ");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
