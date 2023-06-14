

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Point
{
public:
	Point(int xx, int yy)
	{
		x = xx;
		y = yy;
	}

	double dist_to_zero()
	{
		
		double dist = pow((x * x + (y * y)), 0.5);
		return dist;
	}
	friend bool operator< (Point p1, Point p2)
	{
		if (p1.dist_to_zero() < p2.dist_to_zero())
		{
			return true;
		}
		return false;
	}
	friend std::ostream& operator<<(std::ostream& os, const Point& p)
	{
		return os << "[" << p.x << ", " << p.y << "]";
	}
private:
	int x;
	int y;
};
int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для

	// класса Point

	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для

	// класса Point

	return 0;
}

