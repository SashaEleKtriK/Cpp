// control2.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>
#include <math.h>
#include <ctime>

int main()
{
    std::srand(time(0));
    std::cout << "Hello World!\n";
    std::string rang;
    int ten_points_radius = 10;
    int five_points_radius = 20; 
    int center_range_displacement = 50;
    int x_center_displacement = center_range_displacement - (rand()%(center_range_displacement * 2) + 1);
    int y_center_displacement = center_range_displacement - (rand() % (center_range_displacement * 2) + 1);
    int hindrance_radius = 5;
    int x_hindrance_center = ten_points_radius - (rand() % (ten_points_radius * 2) + 1) - x_center_displacement;
    int y_hindrance_center = ten_points_radius - (rand() % (ten_points_radius * 2) + 1) - y_center_displacement;
    std::vector<int> hindrance_center = { x_hindrance_center, y_hindrance_center };
    int point_target = 50;
    int points = 0;
    std::vector<std::vector<int>> shoots;
    while (points < point_target)
    {
        std::cout << "Choose coord x:";
        int x;
        std::cin >> x;
        std::cout << "Choose coord y:";
        int y;
        std::cin >> y;
        std::vector<int> shoot = { x, y };
        bool already_shoot = false;
        for (auto sh : shoots)
        {
            if (sh == shoot)
            {
                already_shoot = true;
                break;
            }

        }
        if (already_shoot)
        {
            std::cout << "U already shoot this point - {" << shoot[0] << ", " << shoot[1] << "}" << std::endl;
            continue;
        }
        shoots.push_back(shoot);
        std::vector<int> shoot_to_zero_center = { shoot[0] - x_center_displacement, shoot[1] - y_center_displacement };
        double xx_c = pow(shoot_to_zero_center[0], 2.0);
        double yy_c = pow(shoot_to_zero_center[1], 2.0);
        double hit_range = pow((xx_c + yy_c), 0.5);
        std::vector<int> shoot_to_hindrance_center = { shoot[0] - x_hindrance_center, shoot[1] - y_hindrance_center };
        double xx_h = pow(shoot_to_hindrance_center[0], 2.0);
        double yy_h = pow(shoot_to_hindrance_center[1], 2.0);
        double hindrance_check = pow((xx_h + yy_h), 0.5);
        if (hindrance_check > hindrance_radius)
        {
            if (hit_range < ten_points_radius)
            {
                points += 10;
                std::cout << "Range to center - " << hit_range << ". Earned - 10. Points - " << points << std::endl ;
                continue;
            }
            if (hit_range < five_points_radius)
            {
                points += 5;
                std::cout << "Range to center - " << hit_range << ". Earned - 5. Points - " << points << std::endl;
                continue;
            }
            if (hit_range > five_points_radius)
            {
                std::cout << "Range to center - " << hit_range << ". Earned - 0. Points - " << points << std::endl;
                continue;
            }
        }
        else {
            std::cout << "Upsss! Range to center - " << hit_range << ". Earned - 0. Points - " << points << std::endl;
            continue;
        }



    }
    if ((shoots.size() - point_target/10) < 3)
    {
        rang = "sniper";
    }
    else if ((shoots.size() - point_target / 10) < 5)
    {
        rang = "soldier";
    }
    else 
    {
        rang = "dilettant";
    }
    std::cout << rang << ". shoots - " << shoots.size();


}

