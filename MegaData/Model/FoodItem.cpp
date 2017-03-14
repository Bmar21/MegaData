//
//  FoodItem.cpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/13/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#include "FoodItem.hpp"

FoodItem :: FoodItem()
{
    this->calories = 999;
    this->foodName = "blah blah";
    this->cost = 1234.21;
    this->delicious = false;
}

FoodItem ::  FoodItem(string name)
{
    this->foodName = name;
    this->cost = 4236.29;
    this->calories = 23;
    this->delicious = true;
}

int FoodItem :: getCalories()
{
    return calories;
}

double FoodItem :: getCost()
{
    return cost;
}
