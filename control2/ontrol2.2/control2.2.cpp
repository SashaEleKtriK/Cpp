﻿
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

std::vector<int> stringToVector(std::string snils)
{
    std::vector<int> v_snils;
    for (int i = 0; i < 9; i++)
    {
        char ch_num = snils[i];
        std::string str_num(1, ch_num);
        int num = stoi(str_num);
        v_snils.push_back(num);
    }
    std::string str_control1(1, snils[9]);
    std::string str_control2(1, snils[10]);
    int control = stoi(str_control1 + str_control2);
    v_snils.push_back(control);
    return v_snils;
}

bool snilsValidation(std::string snils)
{
    std::vector<int> v_snils = stringToVector(snils);
    int sum = 0;
    int control = v_snils[9];
    for (int i = 0; i < 9; i++)
    {
        if (i < 7)
        {
            if (v_snils[i] == v_snils[i + 1] && v_snils[i] == v_snils[i + 2])
            {
                return false;
            }
        }
        sum += v_snils[i] * (9-i);
    }
    if (sum < 100 && control == sum)
    {
        return true;
    }
    if ((sum == 100 || sum == 101) && control == 0)
    {
        return true;
    }
    if (sum > 101 && (sum % 101) < 100 && control == (sum % 101))
    {
        return true;
    }
    if (sum == 101 && (sum % 101) > 100 && control == 0)
    {
        return true;
    }

    return false;

}

int main()
{
    std::cout << "ENTER SNILS\n";
    std::string snils;
    std::cin >> snils;
    if (snils.size() == 11)
    {
        if (snilsValidation(snils))
        {
            std::cout << "TRUE\n";
        }
        else
        {
            std::cout << "FALSE\n";
        }
    }
    main();
}


