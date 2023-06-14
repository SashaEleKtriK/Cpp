#pragma once
#include "Dot.h"

class Triangle
{
public:
	Triangle(double ax, double ay, double bx, double by, double cx, double cy);
	Triangle(Dot* a, Dot* b, Dot* c);
	void printSides();
	double perimeter();
	double square();
private:
	Dot* a;
	Dot* b;
	Dot* c;
};

