// control5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

int *max_vec (const int kc, int a[], int b[], int c[])
{

    for (int i = 0; i < kc; i++)
    {
        if (a[i] < b[i])
        {
            c[i] = b[i];
        }
        else
        {
            c[i] = a[i];
        }
    }
    return c;
}

int main()
{

    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    const int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
    int c [kc]; //Указатель на результирующий массив
    max_vec(kc, a, b, c); //вызов функции для создания массива
    for (int i = 0;i < kc; i++) //Вывод результата.
        std::cout << c[i] << " ";
    std::cout << std::endl;

}
