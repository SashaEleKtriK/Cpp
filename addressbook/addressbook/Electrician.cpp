#include "Electrician.h"
#include <string>

Electrician::Electrician() : Person()
{
    std::cout << "Enter electrical safety level: ";
    std::cin >> electrical_safety_level;
    std::cout << "Enter category: ";
    std::cin >> category;
}

Electrician::Electrician(std::string n, std::string ln, int by, int esl, int cat) :
    Person(n, ln, by)
{
    electrical_safety_level = esl;
    category = cat;
}

std::string Electrician::get_info()
{
    std::string info = Person::get_info();
    info += " Electrician.";
    info += " Electrical_Safety_Level: " + std::to_string(electrical_safety_level) + ".";
    info += " Category: " + std::to_string(category) + ".";
    return info;
}