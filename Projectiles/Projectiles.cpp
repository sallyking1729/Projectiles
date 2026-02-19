// Projectiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

double h_velocity(double int_velocity, double int_angle)
{
    return int_velocity * cos(int_angle);
}

double v_velocity(double int_velocity, double int_angle)
{
    return int_velocity * sin(int_angle);
}

int main()
{

    double int_vel;
    double int_angle;


    cout << "What is the initial velocity? ";
    cin >> int_vel;

    cout << "What is the initial angle?";
    cin >> int_angle;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
