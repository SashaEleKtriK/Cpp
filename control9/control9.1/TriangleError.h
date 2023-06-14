#pragma once
#include <iostream>
#include <string>

class TriangleError
{
public:
	TriangleError() : message("It can not be triangle") {}
	void printMessage() const { std::cout << message << std::endl; }
private:
	std::string message;
};

