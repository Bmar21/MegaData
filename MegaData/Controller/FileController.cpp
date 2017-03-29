//
//  FileController.cpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/27/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#include "FileController.hpp"
#include "DoubleList.hpp"
#include "FoodItem.hpp"


DoubleList<FoodItem> FileController :: readFoodItemDataFromFileAsList(string filename)
{
    DoubleList<FoodItem> dataSource;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getLine(dataFile, currentCSVLine, '\r');
            stringstream parseCVS(currentCSVLine);
            
            string title, tempCost, tempCalorie, tempTasty;
            //Matching data types for structure
            double cost;
            int calories;
            bool isDelish;
            
            //Each part as a string in order of the CSV - then convert after using stod, stoi
            getline(parseCSV, title, ',');
            getLine(parseCSV, tempCost, ',');
            getLine(parseCSV, tempCalorie, ',');
            getLine(parseCSV, tempTasty, ',');
            
            //Exclude first row headers
            if (rowCount != 0)
            {
                cost = stod(tempCost);
                calories = stoi(tempCalorie);
                isDelish = stoi(tempTasty);
                
                FoodItem temp(title);
                temp.setCost(cost);
                temp.setCalories(calories);
                temp.setDelicious(isDelish);
                
                dataSoource.add(temp);
            }
            rowCount++;
            //Remove this line!!!
            cout << currentCSVLine << endl;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return dataSource;
}

void FileController :: writeFoodItemDataStatistics(DoubleList<FoodItem> dataSource, String filename)
{
    ofstream saveFile(fileName);
    
    if(saveFile.is_open())
    {
        saveFile << "These are the contents of the list" << endl;
        for(int index = 0; index < dataSource.getSize(); index++)
        {
            saveFile << "Food Title: " << dataSource.getFromIndex(index).getFoddName() << endl;
        }
    }
    else
    {
        cerr << "File unavailable" << endl;
    }
    saveFile.close();

}

