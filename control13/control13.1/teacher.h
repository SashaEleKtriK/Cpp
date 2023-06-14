#pragma once
#include "human.h"
#include <string>
class teacher : public human {
	// Конструктор класса teacher
public:
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}
	void printInfo()
	{
		human::printInfo();
		std::cout << "Teacher" << std::endl;
		std::cout << "Hours: " << get_work_time() <<
		std::endl;
	}
private:
	// Учебные часы
	unsigned int work_time;
};

