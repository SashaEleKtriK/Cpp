#include "Person.h"
#include <string>
Person::Person()
{
	std::cout << "Enter Name: ";
	std::cin >> name;
	std::cout << "Enter Last Name: ";
	std::cin >> last_name;
	std::cout << "Enter Birth Year: ";
	std::cin >> birth_year;
}
Person::Person(std::string n, std::string ln, int by)
{
	name = n;
	last_name = ln;
	birth_year = by;
}

std::string Person::get_info()
{
	std::string res = name + " " + last_name + ". Birth year: " + std::to_string(birth_year) + ".";
	return res;
}

std::string Person::get_name()
{
	return name;
}

std::string Person::get_last_name()
{
	return last_name;
}

int Person::get_birth_year()
{
	return birth_year;
}
