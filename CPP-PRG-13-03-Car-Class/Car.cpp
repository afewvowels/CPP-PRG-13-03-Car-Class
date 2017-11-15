//
//  Car.cpp
//  CPP-PRG-13-03-Car-Class
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include <iostream>
#include "Car.hpp"

Car::Car(int year, std::string make)
{
    intYearModel = year;
    strMake = make;
    intSpeed = 0;
}

void Car::setYearModel(int year)
{
    intYearModel = year;
}

void Car::setMake(std::string make)
{
    std::string strMake = make;
}

void Car::setSpeedAccelerate()
{
    intSpeed += 5;
}

void Car::setSpeedBrake()
{
    if (intSpeed >= 5)
    {
        intSpeed -= 5;
    }
    else
    {
        std::cout << "Cannot set speed below 0\n";
    }
}

int Car::getYearModel()
{
    return intYearModel;
}

std::string Car::getMake()
{
    return strMake;
}

int Car::getSpeed()
{
    return intSpeed;
}
