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
    wordNode = Node<string>("derpy mc");
    numberNode = Node<int>();
}

void DataStructureController :: testNodes()
{
    cout << "The contents of the Node<string>" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}

void DataStructureController :: start()
{
    cout << "Switching to the IntNodeArray testing" << endl;
    testNodes();
    cout << "Finished testing" << endl;
}

void DataStructureController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
    
    cout << "These should match:" << endl;
    cout << words.getFromIndex(0) << " should be the same as " << copiedWords.getFromIndex(0) << endl;
    copiedWords.setAtIndex(3, "Chnaged the contents of th ecopied Array");
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
    cout << "This should go 1, 2, 3" << endl;
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
    
}
