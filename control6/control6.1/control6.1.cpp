// control6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
void poem(std::string name)
{
    std::cout << "To stop write '/stop'" << std::endl;
    std::string line;
    
    std::ofstream out;
    out.open(name);
    if (out.is_open())
    {
        while (true)
        {
            std::getline(std::cin, line);
            if (line != "/stop")
            {
                out << line << std::endl;
            }
            else
            {
                break;
            }

        }
    }
    else
    {
        std::cout << "Something going wrong" << std::endl;
    }
    out.close();
    std::cout << "Poem was written" << std::endl;
}

int main()
{
    std::cout << "Choose name \n(Like 'name.txt')" << std::endl;
    std::string name;
    std::cin >> name;
    poem(name);
    
    
}
                       