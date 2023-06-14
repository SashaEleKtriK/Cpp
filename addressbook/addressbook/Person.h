#pragma once
#include <iostream>

class Person
{
public:
	Person();
	Person(std::string n, std::string ln, int by);
	virtual std::string get_info();
	std::string get_name();
	std::string get_last_name();
	int get_birth_year();
private:
	std::string name;
	std::string last_name;
	int birth_year;
};

