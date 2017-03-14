//
//  DoubleList.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/9/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef DoubleList_h
#define DoubleList_h

#include "DoubleyLinkedList.hpp"

class DoubleList : public DoublyLinkedList<Type>
{
private:
public:
    DoubleList();
    ~DoubleList();
    void add(Type data);
    Type remove(int index);
    void addAtIndexFast(int index, TypeValue);
    void addAtIndex(int index);
    Type getFromIndex(intn index);
    Type getFromIndexFast(int index);
};

template <class Type>
void DoubleList<Type>:: DoubleList() : DoublyLinked<Type>
{
    
}

template <class Type>
DoubleList<Type> :: ~DoubleList
{
    BiDirectionalNode<Type> * deleteStructure = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete deleteStructure;
        deleteStructure = this->getFront();
    }
    
}

template <class Type>
Void DoubleList<Type> :: add(Type value)
{
    BiDirectionalNode<Type> * addedNode = new BiDirectionalNode<Type>(value);
    if(this->getSize() == new BiDirectionalNode<Type>(value);
    {
        this->setFront(addedNode);
    }
    else
    {
        this->getEnd()setNextPointer(addedNode);
        addedNode->setPreviousPointer(this->getEnd)
    }
    
    
    
    
}




#endif /* DoubleList_h */
