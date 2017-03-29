//
//  FileController.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/27/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.hpp" //Default Structure
#include "../Model/FoodItem.hpp" //DataTypes
#include "../Model/CrimeData.hpp"
#include <string> // String Type
#include <fstream> // File operations
#include <iostream> // Console access
#include <sstream> // String as stream

using namespace std; // Keyword support

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
public:
    DoubleList<FoodItem> readFoodItemDataFileAsList(string filename)
    void writeFoodItemDataStatistics(DoubleList<FoodItem> source, string filename);
};

#endif /* FileController_hpp */
