#pragma once
#include "Person.h"
class Engineer :
    public Person
{
public:
    Engineer();
    Engineer(std::string n, std::string ln, int by, int dep, int cat);
    std::string get_info();

private:
    int department;
    int category;
};

