#pragma once

class TimeValueError
{
public:
	TimeValueError() : message("Time can not be negative") {}
	void printMessage() const { std::cout << message << std::endl; }
private:
	std::string message;
};

class MyTime
{
public:
	MyTime(int h, int m, int s);
	MyTime();
	int get_hours();
	int get_minutes();
	int get_seconds();
	void diff(MyTime t1, MyTime t2);
	void set_time(int h, int m, int s);
	void printTime();
private:
	int hours;
	int minutes;
	int seconds;
};

