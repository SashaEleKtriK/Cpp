
#include <iostream>
#include <math.h>

int main()
{
    

    double balance;
    double rub_bal;
    int rubles;
    int five_thousands;
    int thousands;
    int five_hundreds;
    int hundreds;
    int fifty;
    int tens;
    int five;
    int two;
    int one;
    int copeyki;
    int cop_fifty;
    int cop_ten;
    int cop_five;
    int cop_one;


    std::cout << "Enter balance into rubles(double)\n Like 00.00\n";
    std::cin >> balance;
    

    copeyki = (int)(modf(balance, &rub_bal) * 100);
    cop_fifty = copeyki / 50;
    copeyki = copeyki % 50;
    cop_ten = copeyki / 10;
    copeyki = copeyki % 10;
    cop_five = copeyki / 5;
    copeyki = copeyki % 5;
    cop_one = copeyki;

    rubles = (int)rub_bal;
    five_thousands = rubles / 5000;
    rubles = rubles % 5000;
    thousands = rubles / 1000;
    rubles = rubles % 1000;
    five_hundreds = rubles / 500;
    rubles = rubles % 500;
    hundreds = rubles / 100;
    rubles = rubles % 100;
    fifty = rubles / 50;
    rubles = rubles % 50;
    tens = rubles / 10;
    rubles = rubles % 10;
    five = rubles / 5;
    rubles = rubles % 5;
    two = rubles / 2;
    rubles = rubles % 2;
    one = rubles;

    std::cout << "5000 rub - " << five_thousands << std::endl;
    std::cout << "1000 rub - " << thousands << std::endl;
    std::cout << "500 rub - " << five_hundreds << std::endl;
    std::cout << "100 rub - " << hundreds << std::endl;
    std::cout << "50 rub - " << fifty << std::endl;
    std::cout << "10 rub - " << tens << std::endl;
    std::cout << "5 rub - " << five << std::endl;
    std::cout << "2 rub - " << two << std::endl;
    std::cout << "1 rub - " << one << std::endl;
    std::cout << "50 cop - " << cop_fifty << std::endl;
    std::cout << "10 cop - " << cop_ten << std::endl;
    std::cout << "5 cop - " << cop_five << std::endl;
    std::cout << "1 cop - " << cop_one << std::endl;


    



}
