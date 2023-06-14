#include "MyTime.h"
#include <iostream>

void MyTime::set_time(int h, int m, int s)
{
	if (h < 0 || m < 0 || s < 0)
	{
		throw TimeValueError();
	}
	while (s >= 60)
	{
		s = s - 60;
		m += 1;
	}
	while (m >= 60)
	{
		m = m - 60;
		h += 1;
	}
	hours = h;
	minutes = m;
	seconds = s;
}
void MyTime::printTime()
{
	std::cout << hours << " h, " << minutes << " m, " << seconds << " s \n";
}

int MyTime::get_hours()
{
	return hours;
}
int MyTime::get_minutes()
{
	return minutes;
}
int MyTime::get_seconds()
{
	return seconds;
}
MyTime::MyTime(const int h, const int m, const int s)
{
	set_time(h, m, s);
}
MyTime::MyTime(int num)
{
	int h = 0;
	int m = 0;
	int s = num;
	this->set_time(h, m, s);
	
}
MyTime::MyTime()
{

}
void MyTime::diff(MyTime t1, MyTime t2)
{
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	if (h1 < h2)
	{
		diff(t2, t1);
	}
	else if (h1 == h2)
	{
		if (m1 < m2)
		{
			diff(t2, t1);
		}
		if (m1 == m2)
		{
			if (s1 < s2)
			{
				diff(t2, t1);
			}
		}
	}
	else
	{
		if (s1 >= s2)
		{
			seconds = s1 - s2;
		}
		else
		{
			m1 = m1 - 1;
			seconds = s1 + 60 - s2;
		}
		if (m1 >= m2)
		{
			minutes = m1 - m2;
		}
		else
		{
			h1 = h1 - 1;
			minutes = m1 + 60 - m2;

		}
		hours = h1 - h2;
	}

}

void MyTime::sum(MyTime t1, MyTime t2)
{
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	this->set_time(h1 + h2, m1 + m2, s1 + s2);

}

MyTime operator-(MyTime& t1, MyTime& t2)
{
	MyTime res;
	res.diff(t1, t2);
	return res;
}

MyTime operator+(MyTime& t1, MyTime& t2)
{
	MyTime res;
	res.sum(t1, t2);
	return res;
}

MyTime operator-(int t2, MyTime& t1)
{
	MyTime res;
	res.diff(t1, t2);
	return res;
}

MyTime operator+(int t2, MyTime& t1)
{
	MyTime res;
	res.sum(t1, t2);
	return res;
}

MyTime operator-(MyTime& t1, int t2)
{
	MyTime res;
	res.diff(t1, t2);
	return res;
}

MyTime operator+(MyTime& t1, int t2)
{
	MyTime res;
	res.sum(t1, t2);
	return res;
}

bool operator>(MyTime& t1, MyTime& t2)
{
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	if (h1 > h2)
	{
		return true;
	}
	else if (h1 == h2)
	{
		if (m1 > m2)
		{
			return true;
		}
		if (m1 == m2)
		{
			if (s1 > s2)
			{
				return true;
			}
		}
	}
	return false;
}

bool operator<(MyTime& t1, MyTime& t2)
{
	
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	if (h1 < h2)
	{
		return true;
	}
	else if (h1 == h2)
	{
		if (m1 < m2)
		{
			return true;
		}
		if (m1 == m2)
		{
			if (s1 < s2)
			{
				return true;
			}
		}
	}
	return false;
	
}

bool operator==(MyTime& t1, MyTime& t2)
{
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	if (h1 == h1 && m1 == m2 && s1 == s2)
	{
		return true;
	}
	
	return false;
}

bool operator!=(MyTime& t1, MyTime& t2)
{
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	if (h1 != h1 || m1 != m2 || s1 != s2)
	{
		return true;
	}

	return false;
}

bool operator<=(MyTime& t1, MyTime& t2)
{
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	if (h1 < h2)
	{
		return true;
	}
	else if (h1 == h2)
	{
		if (m1 < m2)
		{
			return true;
		}
		if (m1 == m2)
		{
			if (s1 <= s2)
			{
				return true;
			}
		}
	}
	return false;
}

bool operator>=(MyTime& t1, MyTime& t2)
{
	int h1 = t1.get_hours();
	int h2 = t2.get_hours();
	int m1 = t1.get_minutes();
	int m2 = t2.get_minutes();
	int s1 = t1.get_seconds();
	int s2 = t2.get_seconds();
	if (h1 > h2)
	{
		return true;
	}
	else if (h1 == h2)
	{
		if (m1 > m2)
		{
			return true;
		}
		if (m1 > m2)
		{
			if (s1 >= s2)
			{
				return true;
			}
		}
	}
	return false;
}
