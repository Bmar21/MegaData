//
//  Stack.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/7/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "DoublyLinkedList.hpp"

template <class Type>
class Stack : public DoublyLinkedList <Type>
{
private:
public:
    Stack();
    ~Stack();
    void add(Type value);
    Type remove(int index);
    Type pop();
    Type peek():
    void push(Type data);
};

/* 
 Empty since the base class constructor is fabu.
 */
template <class Type>
Stack<Type> :: Stack() : DoublyLinkedList<Type>()
{
    
}

/* 
 No need to change this from Queue - so it was copied :D
*/
template

template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addtoStack = new BiDirectionalNode<type>(addedThing);
    
    if(this->getSize() == 0 || this->getFront() == nullptr || this->getEnd() == nullptr)
    {
        this->setFront(addToStack);
    }
    else
    {
        this->getEnd()->SetNextPointer(addToStack);
        addToStack->setPreviousPointer(this->getEnd());
    }
    this->setEnd(addToStack);
    this->setSize(this->getSize() + 1);
}

#endif /* Stack_h */
