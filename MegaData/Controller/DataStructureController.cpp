//
//  DataStructureController.cpp
//  MegaData
//
//  Created by Marlor, Brandon on 2/8/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"

using namespace std;

DataStructureController :: DataStructureController()
{
    wordNode = Node<string>("derpy mcderpface");
    numberNode = Node<int>();
    
}

void DataStructureController :: testNodes()
{
    cout << "" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "" << endl;
    cout << numberNode.getNodeData() << endl;
}

void DataStructureController :: start()
{
    cout << "Starting the project" << endl;
    
    
    cout << "Finished testing" << endl;
}

void DataStructureController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for (int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot  "<< index << endl;
    }
    
    cout << "Testing input" << endl;
    
    for(int index = 0; index < 3; index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for(int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot  "<< index << endl;
    }
    
}

void DataStructureController :: testListIntro()
{
    List<int> sample;
    sample.addFront(2);
    sample.addEnd(3);
    sample.addFront(1);
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
        cout << sample.remove(1) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
    
}

void DataStructureController :: testListTiming()
{
    DoubleList<int> timingList;
    Timer totalTimer;
    for(int index=0; index < 10000; index++)
    {
        timingList.add(rand());
    }
    Timer doubleTimer;
    long slowTime [1000];
    long fastTime [1000];
    double averageSlow = 0.00, averageFast = 0.0;
    
    for(int index = 0; index < 1000; index++)
    {
        int randomIndex = rand() % 10000;
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        averageSlow += slowTime[index];
        averageFast += fastTime[index];
    }
    
    averageSlow = averageSlow/1000.00;
    averageFast = averageFast/1000.00;
    totalTimer.stopTimer();
    
    cout << "The average speed for the getFromIndex method was: " << averageSlow << " microseconds." << endl;
    cout << "The average speed for the getFromIndex method was: " << averageFast << " microseconds." << endl;
    
    cout << "A time savings?? of: " << averageSlow - averageFast << " microseconds. " << endl;
    
    totalTimer.displayTimerInformation();
}

void DataStructureController :: testFoodQueue()
{
    Queue<FoodItem> tastyFood;
    FoodItem szechwan("spicy chinese dish");
    
    tastyFood.enqueue(szechwan);
    FoodItem boring;
    
    FoodItem removed = tastyFood.dequeue();
    cout << "The item removed from the queue was: " << removed.getFoodName() << " and should be: spicy chinese dish" << endl;
}

void DataStructureController :: testIntStack()
{
    Stack<int> numberStack;
    numberStack.add(2315);
    numberStack.push(32);
    int testValue = numberStack.pop();
    cout << "Test value is " << testValue << " and should be 32" << endl;
}

void DataStructureController :: testBinarySearchTreeOperations()
{
    
    BinarySearchTree<int> numbers;
    numbers.insert(9843);
    numbers.insert(10);
    numbers.insert(43);
    numbers.insert(-123);
    numbers.insert(23465);
    numbers.insert(10); // won't go in
    numbers.insert(43243);
    numbers.insert(-45677654);
    numbers.insert(92165);
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    numbers.inOrderTraversal();
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
    
}

void DataStructureController :: testBinarySearchData()
{
    FileController fileData;
    Timer treeTimer;
    treeTimer.startTimer();
    BinarySearchTree<fileData> crimeTree = fileData.readCrimeDataToBinarySearchTree("/Users/cody.henrichsen/Documents/crimes.csv");
    treeTimer.stopTimer();
    
    int count = crimeTree.getSize();
    int height = crimeTree.getHeight();
    bool complete = crimeTree.isComplete();
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
}

void DataStructureController :: testAVLTreeOperations()
{
    AVLTree<int> numbers;
    numbers.insert(9843);
    numbers.insert(10);
    numbers.insert(43);
    numbers.insert(-123);
    numbers.insert(23465);
    numbers.insert(10); // won't go in
    numbers.insert(43243);
    numbers.insert(-45677654);
    numbers.insert(92165);
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    cout << "Balanced should be true || 1 and is: " << numbers.isBalanced() << endl;
}

void DataStructureController :: testAVLData()
{
    FileController fileData;
    Timer treeTimer;
    treeTimer.startTimer();
    AVLTree<CrimeData> crimeTree = fileData.readCrimeDataToAVLTree("/Users/cody.henrichsen/Documents/crimes.csv");
    treeTimer.stopTimer();
    
    int count = crimeTree.getSize();
    int height = crimeTree.getHeight();
    bool complete = crimeTree.isComplete();
    bool balanced = crimeTree.isBalanced();
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
}

BinarySearchTree<CrimeData> FileController :: readCrimeDataToBinarySearchTree(string filename)
{
    BinarySearchTree<CrimeData> crimeData;
    string currentCSVLine;
    int rowCount = 0;
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            
            //Exclude first row headers
            if(rowCount != 0)
            {
                CrimeData rowData(currentCSVLine);
                crimeData.insert(rowData);
            }
            rowCount++;
        }
        dataFile.close();
    }
    
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimeData;
}

CrimeData :: CrimeData(string currentCSVLine)
{
    stringstream parseCSV(currentCSVLine);
    
    string department, tempPopulation, tempProperty, tempBurglary, tempLarceny, tempMotor, tempViolent, tempAssault, tempMurder, tempRape, tempRobbery, state, tempAllProperty, tempAllBurglary, tempAllLarceny, tempAllMotor, tempAllViolent, tempAllAssault, tempAllMurder, tempAllRape, tempAllRobbery, tempYear;
    
    getline(parseCSV, department, ',');
    getline(parseCSV, tempPopulation, ',');
    getline(parseCSV, tempProperty, ',');
    getline(parseCSV, tempBurglary, ',');
    getline(parseCSV, tempLarceny, ',');
    getline(parseCSV, tempMotor, ',');
    getline(parseCSV, tempViolent, ',');
    getline(parseCSV, tempAssault, ',');
    getline(parseCSV, tempMurder, ',');
    getline(parseCSV, tempRape, ',');
    getline(parseCSV, tempRobbery, ',');
    getline(parseCSV, state, ',');
    getline(parseCSV, tempAllProperty, ',');
    getline(parseCSV, tempAllBurglary, ',');
    getline(parseCSV, tempAllLarceny, ',');
    getline(parseCSV, tempAllMotor, ',');
    getline(parseCSV, tempAllViolent, ',');
    getline(parseCSV, tempAllAssault, ',');
    getline(parseCSV, tempAllMurder, ',');
    getline(parseCSV, tempAllRape, ',');
    getline(parseCSV, tempAllRobbery, ',');
    getline(parseCSV, tempYear, ',');
    
    this->setDepartment(department);
    this->setPopulation(stoi(tempPopulation));
    this->setAllPropertyRates(stod(tempProperty));
    this->setBurglaryRates(stod(tempBurglary));
    this->setLarcenyRates(stod(tempLarceny));
    this->setMotorRates(stod(tempMotor));
    this->setAllViolentRates(stod(tempViolent));
    this->setAssaultRates(stod(tempAssault));
    this->setMurderRates(stod(tempMurder));
    this->setRapeRates(stod(tempRape));
    this->setRobberyRates(stod(tempRobbery));
    this->setState(state);
    this->setAllPropertyCrime(stoi(tempAllProperty));
    this->setAllBurglary(stoi(tempAllBurglary));
    this->setAllLarceny(stoi(tempAllLarceny));
    this->setAllMotor(stoi(tempAllMotor));
    this->setAllViolent(stoi(tempAllViolent));
    this->setAllAssault(stoi(tempAllAssault));
    this->setAllMurder(stoi(tempAllMurder));
    this->setAllRape(stoi(tempAllRape));
    this->setAllRobbery(stoi(tempAllRobbery));
    this->setYear(stoi(tempYear));
}
CrimeData stream operator overload
CrimeData.hpp
friend ostream & operator << (ostream &outputStream, const CrimeData & outputData);
CrimeData.cpp
ostream & operator << (ostream &outputStream, const CrimeData & outputData)
{
    return outputStream << outputData.getDepartment() << "had " << outputData.getAllViolentRates() << " in year: " << outputData.getYear();
}

AVLTree<CrimeData> FileController :: readCrimeDataToAVLTree(string filename)
{
    AVLTree<CrimeData> crimeData;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            //Exclude first row headers
            if(rowCount != 0)
            {
                CrimeData rowData(currentCSVLine);
                crimeData.insert(rowData);
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimeData;
}
