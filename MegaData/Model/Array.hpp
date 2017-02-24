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
    
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
};

template <class Type>
Array<Type> :: Array()
{
    //Never used
    //Default constructor only supplied to avoid compilation
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = size;
    this->front = new Node<Type>();
    
    for (int index = 1; index < size; index++)
    {
        Node<Type> * current = new Node<Type>();
        current->setNodePointer(front);
        front = current;
    }
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Node<Type> * current = front;
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getNodePointer();
    }
    
    current->setNodeData(data);
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    
    Type value;
    
    Node<Type>* current = front;
    
    for(int position = 0; position < index++; position++)
    {
        current = current->getNodePointer();
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
 */

template <class Type>
Array<Type> :: ~Array()
{
    int count = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        //Move to next node in array.
        front = front->getNodePointer();
        cout << "Moving to the nedt node. At: " << count << endl;
        //Delete the  front pointer.
        delete remove;
        cout << "Deleteing the old front pointer." << endl;
        //Move delete to new front.
        remove = front;
        cout << "Moving to new front pointer." << endl;
        count--;
        cout << "Front is at: " << front << " count is: " << count << endl;
    }
}
 
//Copy Constructor- called when you create an instance of an object by assigning it via =.
template <class Type>
Array<Type> :: Array(const Array<Type> & toBeCopied)
{
    this->size = toBeCopied.getSize();
    
    //Build Data Structure
    this->front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * temp = new Node<Type>();
        temp->setNodePointer(front);
        front= temp;
    }
    
    //Copy values into new Array.
    Node<Type> * copyTemp = toBeCopied.getFront();
    Node<Type> * updated = this->front;
    for(int index = 0; index < size; index++)
    {
        updated->setNodeData(copyTemp->getNodeData());
        updated = updated-> getNodePointer();
        copyTemp = copyTemp->getNodePointer();
    }
}

/*
 The const modifier at the end of the method is used to denote that the 
 method does not impact the state fo the object.
 */
template <class Type>
Node<Type> * Array<Type> :: getFront() const
{
    return front;
}

#endif /* Array_h */
