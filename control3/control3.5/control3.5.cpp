// control3.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

std::vector<bool> binary_number(int num, std::vector<bool> &result)
{
    std::vector<bool> final_result;
    if (num > 0)
    {
        
        bool bite = num % 2;
        num = num / 2;
        result.push_back(bite);
        binary_number(num, result);

    }
    else
    {
        for (int i = result.size() - 1; i > -1; i--)
        {
            final_result.push_back(result[i]);
        }
        result = final_result;
    }
    return result;


}

int main()
{
    std::cout << "Enter num\n";
    int num;
    std::cin >> num;
    std::vector<bool> result;
    for (bool i : binary_number(num, result))
    {
        std::cout << i;
    }
}


