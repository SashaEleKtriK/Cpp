// control7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

Time difference(Time t1, Time t2)
{
    Time result;
    if (t1.hours < t2.hours)
    {
        result = difference(t2, t1);
    }
    else if (t1.hours == t2.hours)
    {
        if (t1.minutes < t2.minutes)
        {
            result = difference(t2, t1);
        }
        if (t1.minutes == t2.minutes)
        {
            if (t1.seconds < t2.seconds)
            {
                result = difference(t2, t1);
            }
        }
    }
    else

        if (t1.seconds >= t2.seconds)
        {
            result.seconds = t1.seconds - t2.seconds;
        }
        else
        {
            t1.minutes = t1.minutes - 1;
            result.seconds = 60 + t1.seconds - t2.seconds;
        }
        if (t1.minutes >= t2.minutes)
        {
            result.minutes = t1.minutes - t2.minutes;
        }
        else
        {
            t1.hours = t1.hours - 1;
            result.minutes = 60 + t1.minutes - t2.minutes;
        }
        result.hours = t1.hours - t2.hours;
        
    
    return result;
}

int main()
{
    std::cout << "Enter hours Time 1\n";
    Time t1;
    std::cin >> t1.hours;
    std::cout << "Enter minutes Time 1\n";
    std::cin >> t1.minutes;
    std::cout << "Enter seconds Time 1\n";
    std::cin >> t1.seconds;
    std::cout << "Enter hours Time 2\n";
    Time t2;
    std::cin >> t2.hours;
    std::cout << "Enter minutes Time 2\n";
    std::cin >> t2.minutes;
    std::cout << "Enter seconds Time 2\n";
    std::cin >> t2.seconds;
    Time res = difference(t1, t2);
    std::cout << res.hours << " " << res.minutes << " " << res.seconds << std::endl;
    main();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
