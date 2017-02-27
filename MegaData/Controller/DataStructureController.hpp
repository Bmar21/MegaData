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
#include "../Model/List.hpp"
#include <string>

using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
    void testListIntro();
public:
    DataStructureController();
    void start();
    
};

#endif /* DataStructureController_hpp */
