// control9.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyTime.h"

int main()
{
    try
    {
        MyTime* t1 = new MyTime(1, 222, 44);
        t1->printTime();
    }
    catch (TimeValueError er)
    {
        er.printMessage();
    }

}

