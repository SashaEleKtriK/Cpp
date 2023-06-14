// control14.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template<class T>
double average(T arr[], int size)
{
    double average = 0;
    for (int i = 0; i < size; i++)
    {
        T x = arr[i];
        average += x;
    }
    average = average / size;
    return average;
}

int main()
{
    int arr1[] = { 9,3,17,6,5,4,31,2,12 };
    int k1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << average(arr1, k1) << std::endl;
    char arr2[] = { '9','3','17','6','5','4','31','2','12' };
    int k2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << average(arr2, k2) << std::endl;
    double arr3[] = { 9.0,3.0,17.0,6.0,5.0,4.0,31.0,2.0,12.0 };
    int k3 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << average(arr3, k3) << std::endl;
}

