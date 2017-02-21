//
//  Array.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 2/15/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>
#include <iostream>
using namespace std; 

template <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    Array();
    Array(int size);
    
    //Destructor
    ~Array<Type>();
    //Copy Constructor
    Array<Type>(const Array<Type> & toBeCopied);
    
    //Helper methods
    int getSize() const;
    Node<Type> * getFront() const;
    
    void setIndex(int index, Type value);
    Type getFromIndex(int index);
};

template <class Type>
Array<Type> :: Array()
{
    //Never used
    //Default constructor only supplied to avoid compilation
        error!
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = size;
    this->front = new Node<Type>();
    
    for (int index = 1; index < size; index++)
    {
        Node<Type>() * current = new Node<Type>();
        current->setNodePointer(front);
        front = current;
    }
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Node<Type> * current = front;
    for(int spot = 0; spot < index; spott++)
    {
        current = current->getNodePointer();
    }
    
    current->setNodeData(data);
}

template <class Type>
Type Array<Type> :: setAtIndex(int index)
{
    assert(index >= 0 && index < size);
    
    Type value;
    
    Node<Type>* current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer
    }
    
    value = current->getNodeData();
    
    return value;
}

/*
Destructor
*/

template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

/*
 The role of the destructor is to de-allocate all memory
 called by the use of 'new' keyword. This is to prevent 
 problems such as memory leaks.
 The destructor is NEVER called by the programmer; rather,
 the destructor is called when either the variable goes out of
 scope, or the pointer to the variable deleted.
 The count and cout statements are tempory.
 
 





#endif /* Array_h */
