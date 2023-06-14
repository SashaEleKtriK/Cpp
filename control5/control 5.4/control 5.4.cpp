// control 5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int Prog(std::string op, int a, int b)
{
    int result = 0;
    if (op == "-m")
    {
        result = a * b;
        return result;
    }
    if (op == "-a")
    {
        result = a + b;
        return result;
    }
    else
    {
        std::cout << "Operator not found" << std::endl;
    }
    return result;
}

int main()
{
    std::string prog;
    std::string func;
    std::string a;
    std::string b;
    std::cin >> prog;
    std::cin >> func;
    std::cin >> a;
    std::cin >> b;
    int ai = 0;
    int bi = 0;
    try
    {
        ai = stoi(a);
        bi = stoi(b);
    }
    catch (std::exception ex)
    {
        std::cout << "a and b must be int" << std::endl;
        main(); 
    }

    if (prog == "Prog")
    {
        std::cout << Prog(func, ai, bi) << std::endl;
    }
    else
    {
        std::cout << "Program not found" << std::endl;
    }
    main();

}