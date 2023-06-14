#include "Interface.h"
Person* Interface::choice_class(int choice)
{
    if (choice == 0)
    {
        return new Person();

    }
    if (choice == 1)
    {
        return new Electrician();
    }
    if (choice == 2)
    {
        return new Dispetcher();
    }
    if (choice == 3)
    {
        return new Engineer();
    }
}

void Interface::printVector(const std::vector<Person*> vect)
{
    for (Person* p : vect)
    {
        std::cout << p->get_info() << std::endl;
    }

}

void Interface::saveIntoFile(const std::vector<Person*> vect, std::string fileName)
{
    std::ofstream out;
    out.open(fileName + ".txt");
    for (Person* p : vect)
    {
        out << p->get_info() << std::endl;
    }
    out.close();
}

void Interface::start_prog()
{
    std::vector<Person*> energy_workers;
    char res = 'y';
    do
    {
        std::cout << "Choose post \n 0 - just person\n 1 - electrician\n 2 - dispetcher\n 3 - engineer" << std::endl;
        int choice;
        std::cin >> choice; 
        energy_workers.push_back(choice_class(choice));
        std::cout << "Enter more? (y/n)";
        std::cin >> res;
    }
    while (res == 'y');
    printVector(energy_workers);
    std::cout << "Save into file? (y / n)" << std::endl;
    char answ;
    std::cin >> answ;
    if (answ == 'y')
    {
        std::cout << "Enter file name: " << std::endl;
        std::string f_name;
        std::cin >> f_name;
        saveIntoFile(energy_workers, f_name);    
    }
    else
    {
        start_prog();
    }
}
