#include "Dispetcher.h"
#include <string>

Dispetcher::Dispetcher() : Person()
{
    std::cout << "Enter district: ";
    std::cin >> district;
}

Dispetcher::Dispetcher(std::string n, std::string ln, int by, int dist) :
    Person(n, ln, by)
{
    district = dist;
}

std::string Dispetcher::get_info()
{
    std::string info = Person::get_info();
    info += " Dispatcher.";
    info += " District number: " + std::to_string(district) + ".";
    return info;
}
