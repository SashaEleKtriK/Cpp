#pragma once
#include "Person.h"
class Dispetcher :
    public Person
{
public:
    Dispetcher();
    Dispetcher(std::string n, std::string ln, int by, int district);
    std::string get_info();

private:
    int district;
};

