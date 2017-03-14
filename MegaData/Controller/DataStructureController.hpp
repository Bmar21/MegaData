//
//  DataStructureController.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 2/8/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include "../ModelFoodItem.hpp"
#include "../Model/List.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../CircularList.hpp'
#include <string>

using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    void testNodesTypes();
    Node<int> numberNode:
    Node<string> wordNode;
    void testAdvancedFeatures();
    void testListIntro();
    void testDouleLists();
    void testListTiming();
public:
    DataStructureController();
    void start();
    
};

#endif /* DataStructureController_hpp */
