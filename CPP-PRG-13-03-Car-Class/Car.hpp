//
//  Car.hpp
//  CPP-PRG-13-03-Car-Class
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <string>

class Car
{
public:
    Car(int, std::string);
    void setYearModel(int);
    void setMake(std::string);
    void setSpeedAccelerate();
    void setSpeedBrake();
    int getYearModel();
    std::string getMake();
    int getSpeed();
private:
    int intYearModel;
    std::string strMake;
    int intSpeed;
};

#endif /* Car_hpp */
