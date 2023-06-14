// console4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

bool input(int& a, int& b)
{
    try
    {
        std::cout << "Enter int a\n";
        std::string str_a;
        std::cin >> str_a;
        a = stoi(str_a);
        std::cout << "Enter int b\n";
        std::string str_b;
        std::cin >> str_b;
        b = stoi(str_b);
        return true;
    }
    catch(std::exception ex)
    {
        return false;
    }
        
}

int main()
{
    int a;
    int b;
    if (input(a, b) == false) // if(!Input(a,b))
    {
        std::cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;
}

