// control6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

void sort_massive(const int n, int mas[])
{
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями
    for (int i = 0; i < n; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < n; j++)
        {
            min = (mas[j] < mas[min]) ? j : min;
        }

        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }
    std::cout << "Massive was sorted" << std::endl;

}

void writeMassive(int mas[], int n, std::ofstream &out)
{

        for (int i = 0; i < n; i++)
        {
            out << mas[i] << "; ";
        }
        out << std::endl;
    
}

int main()
{
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> mas[i];
    }
    std::ofstream out;
    out.open("6.2.txt");
    if (out.is_open())
    {
        writeMassive(mas, n, out);
        sort_massive(n, mas);
        writeMassive(mas, n, out);
    }
    else
    {
        std::cout << "Something going wrong" << std::endl;
    }
    out.close();
    std::cout << "Massives was written" << std::endl;
}

