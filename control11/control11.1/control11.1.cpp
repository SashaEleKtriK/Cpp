

#include <iostream>
#include "MyTime.h"

int main()
{
    std::cout << "Hello World!\n";
    MyTime t1 = 4;
    MyTime* t2 = new MyTime(1, 222, 44);
    MyTime* t3 = new MyTime(23, 222, 44);
    MyTime t23 = *t2 + *t3;
    MyTime t12 = *t2 - t1;
    MyTime tt = *t2 - 4;
    MyTime ttt = 6 + t1;
    t23.printTime();
    t12.printTime();
    tt.printTime();
    ttt.printTime();
    std::cout << (*t3 <= t23) << std::endl;
    std::cout << (t1 >= t23) << std::endl;
    std::cout << (t1 != t23) << std::endl;




}
