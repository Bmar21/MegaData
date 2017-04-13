//
//  BinarySearchTree.h
//  MegaData
//
//  Created by Marlor, Brandon on 4/11/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include "BinarySearchTreeNode.hpp"

template <class Type>
class BinarySearchTree : public Tree<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);

    void removeNode(BinarySearchTreeNode<Type> * & removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    
    void printToFile();
    
    bool contain(Type Value):
    void insert(Type itemToInsert);
    void remove(Type value);
};

template<class Type>
BinarySearchTreeNode<Type> :: BinarySearchTree() : Tree<Type>()
{
    this->root = nullptr;
}



#endif /* BinarySearchTree_h */
