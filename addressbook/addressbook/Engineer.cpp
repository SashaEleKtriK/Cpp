#include "Engineer.h"
#include <string>


Engineer::Engineer() : Person()
{
    std::cout << "Enter department: ";
    std::cin >> department;
    std::cout << "Enter category: ";
    std::cin >> category;
}

Engineer::Engineer(std::string n, std::string ln, int by, int dep, int cat) :
    Person(n, ln, by)
{
    department = dep;
    category = cat;
}

std::string Engineer::get_info()
{
    std::string info = Person::get_info();
    info += " Engineer.";
    info += " Department: " + std::to_string(department) + ".";
    info += " Category: " + std::to_string(category) + ".";
    return info;
}


