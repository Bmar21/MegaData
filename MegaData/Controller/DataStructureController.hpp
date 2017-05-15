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
#include "../Model/IntNodeArray.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/Timer.hpp"
#include "../Model/BiDirectionalNode.hpp"
#include "../Model/BinarySearchTree.h"
#include "../Model/BinarySearchTreeNode.hpp"
#include "../Model/Tree.hpp"
#include "../Model/AVLTree.hpp"
#include "../Model/CrimeData.hpp"
#include "../Model/HashNode.hpp"
#include "../Model/HashTable.hpp" 
#include<string>

using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    void testNodes();
    void testArrayTemplate();
    void testDestructors();
    void testAdvancedFeatures();
    void testListIntro();
    void testDouleLists();
    void testListTiming();
    void testFoodQueue();
    void testIntStack();
    void testBinarySearchTreeOperations();
    void testBinarySearchData();
    void testAVLTreeOperations();
    void testAVLData();
    Node<int> numberNode;
    Node<string> wordNode;
public:
    DataStructureController();
    BinarySearchTree<CrimeData> readCrimeDataToBinarySearchTree(string filename);
    AVLTree<CrimeData> readCrimeDataToAVLTree(string filename);
    void start();
    
};

#endif /* DataStructureController_hpp */
