#include "Triangle.h"
#include "Dot.h"
#include <iostream>

Triangle::Triangle(double ax, double ay, double bx, double by, double cx, double cy)
{
	
	this -> a = new Dot(ax, ay);
	this->b = new Dot(bx, by);
	this->c = new Dot(cx, cy);


}

Triangle::Triangle(Dot* a_, Dot* b_, Dot* c_)
{
	this->a = a_;
	this->b = b_;
	this->c = c_;
}

void Triangle::printSides()
{
	double ab = a -> distanceTo(*b);
	double bc = b->distanceTo(*c);
	double ac = a->distanceTo(*c);
	std::cout << "Side AB long - " << ab << std::endl;
	std::cout << "Side BC long - " << bc << std::endl;
	std::cout << "Side AC long - " << ac << std::endl;

}

double Triangle::perimeter()
{
	double ab = a->distanceTo(*b);
	double bc = b->distanceTo(*c);
	double ac = a->distanceTo(*c);
	double perimeter = ab + bc + ac;
	return perimeter;
}

double Triangle::square()
{
	double ab = a->distanceTo(*b);
	double bc = b->distanceTo(*c);
	double ac = a->distanceTo(*c);
	double p = (ab + bc + ac) / 2;
	double square = pow(p * (p - ab) * (p - bc) * (p - ac), 0.5);
	return square;
}


