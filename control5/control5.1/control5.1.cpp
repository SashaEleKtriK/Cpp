// control5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

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
    for (int i = 0; i < n; i++)
    {
        std::cout << mas[i] << '\t';
    }
        
}

void massive(const int n, int mas[])
{   
    //сумма всех элементов
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    std::cout << "Sum = " << s << std::endl;
    //среднее значение элемента
    double mid = 1.0 * s / n;
    std::cout << "Mid = " << mid << std::endl;
    //сума отрицательных значений
    int negative_s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            negative_s += mas[i];
        }
    }
    std::cout << "Sum of negative = " << negative_s << std::endl;
    //сумма положительных значений
    int positive_s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            positive_s += mas[i];
        }
    }
    std::cout << "Sum of positive = " << positive_s << std::endl;
    //сумма элементов с четным индексом
    int even_s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 == 0)
        {
            even_s += mas[i - 1];
        }
    }
    std::cout << "Sum of even = " << even_s << std::endl;
    //сумма элементов с нечетным индексом
    int odd_s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 == 1)
        {
            odd_s += mas[i - 1];
        }
    }
    std::cout << "Sum of odd = " << odd_s << std::endl;
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
    massive(n, mas);
    sort_massive(n, mas);
}

