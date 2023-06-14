#pragma once
#include "Person.h"
class Electrician :
    public Person
{ 
public:
    Electrician();
    Electrician(std::string n, std::string ln, int by, int esl,  int cat);
    std::string get_info();
  
private:
    int electrical_safety_level;
    int category;  
};

