// CONTROL2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

bool isItSimple(int num)
{
    bool isSimple = true;
    if (num != 2)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isSimple = false;
                return isSimple;
            }
        }
    }
    return isSimple;
}

bool isItSuperSimple(int num)
{
    if (isItSimple(num))
    {
        bool isSuperSimple = false;
        std::vector<int> simpleNums;
        for (int i = 2; i < (num + 1); i++)
        {
            if (isItSimple(i))
            {
                simpleNums.push_back(i);
            }
        }
        if (isItSimple(simpleNums.size()))
        {
            isSuperSimple = true;
        }
        return isSuperSimple;
    }
    return false;
    
}

int main()
{
    std::cout << "ENTER UR NUMBER (INT)\n";
    int num;
    std::cin >> num;
    std::string result;
    if (isItSuperSimple(num))
    {
       result = "Num is Super Simple";
    }
    else
    {
        result = "Num is NOT Super Simple";
    }
    std::cout << result;
}


