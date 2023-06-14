#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Person.h"
#include "Electrician.h"
#include "Engineer.h"
#include "Dispetcher.h"
static class Interface
{
public:
	static void start_prog();

private:
	static Person* choice_class(int choice);
	static void printVector(const std::vector<Person*> vect);
	static void saveIntoFile(const std::vector<Person*> vect, std::string file);
};

