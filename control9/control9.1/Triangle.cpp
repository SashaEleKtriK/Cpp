#include "Triangle.h"
#include "TriangleError.h"
#include <cmath>   

Triangle::Triangle(double a, double b, double c)
{
	if (a > b + c || b > a + c || c > b + a)
	{
		throw TriangleError();
	}
	a_size = a;
	b_size = b;
	c_size = c;
}

double Triangle::square()
{
	double p = (a_size + b_size + c_size) / 2;
	double square = pow(p * (p - a_size) * (p - b_size) * (p - c_size), 0.5);
	return square;

}
