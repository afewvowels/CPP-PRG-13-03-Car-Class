//
//  main.cpp
//  CPP-PRG-13-03-Car-Class
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a class named Car that has the following member variables:
//
//  * yearModel - an int that holds the car's year model
//  * make - a string that holds the make of the car
//  * speed - an int that holds the car's current speed
//
//  In addition, the class should have the following constructor and other meber functions:
//
//  * Constructor - The constructor should accept the car's year model and make as
//  arguments. These values should be assigned to the object's yearModel and make member
//  variables. The constructor should also assign 0 to the speed member variables.
//  * Accessor - appropriate accessor functions to get the values stored in an object's
//  yearModel, make, and speed member variables.
//  * accelerate - The accelerate function should add 5 to the speed member variable
//  each time it is called.
//  * brake - The brake function should substract 5 from the speed member variable
//  each time it is called.
//
//  Demomstrate the class in a program that creates a Car object, then calls the accelerate
//  function five times. After each call to the accelerate function, get the current speed
//  of the car and display it. Then, call the brake function five times. After each call to the
//  brake function, get the current speed of the car and display it.

#include <iostream>
#include "Car.hpp"

using namespace std;

Car createCar();
void modifySpeed(Car);

int main()
{
    Car carNewCar = createCar();
    
    modifySpeed(carNewCar);
    
    return 0;
}

Car createCar()
{
    int intCarYear;
    
    string strCarMake;
    
    cout << "Please enter a model year: ";
    cin >> intCarYear;
    while (!cin || intCarYear < 1950 || intCarYear > 2018)
    {
        cout << "Please enter a model year between 1950 and 2018: ";
        cin.clear();
        cin.ignore();
        cin >> intCarYear;
    }
        
    cout << "Please enter the make of the car: ";
    cin.clear();
    cin.ignore();
    getline(cin, strCarMake);
    
    Car carCar(intCarYear, strCarMake);
    
    return carCar;
}

void modifySpeed(Car carCar)
{
    int intMenuSelection = -1;
    
    while (intMenuSelection != 3)
    {
        cout << "Please select from the following menu options:\n";
        cout << "\t1. Accelerate\n";
        cout << "\t2. Brake\n";
        cout << "\t3. Quit\n";
        cout << "Make your selection: ";
        cin >> intMenuSelection;
        while (!cin || intMenuSelection < 1 || intMenuSelection > 3)
        {
            cout << "Please select from the available menu options: ";
            cin.clear();
            cin.ignore();
            cin >> intMenuSelection;
        }
        
        if (intMenuSelection == 1)
        {
            carCar.setSpeedAccelerate();
            cout << "Speed: " << carCar.getSpeed() << endl;
        }
        else if (intMenuSelection == 2)
        {
            carCar.setSpeedBrake();
            cout << "Speed: " << carCar.getSpeed() << endl;
        }
        else if (intMenuSelection == 3)
            break;
        else
            cout << "ERROR WITH MENU SELCETION";
    }
    
    cout << "\nYou have exited the program\n\n";
}
