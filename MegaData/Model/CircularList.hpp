//
//  CircularList.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/1/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.hpp"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    //No Need to redefine the private data members of doublylinkedList!!!
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
    //Other methods as needed :D
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList()
{
    //deal with circle list stuff only here
    
    this->size = -993423;
    
}

template <class Type>
void CircularList<Type> :: add(Type data) : DoubleyLinkedList<Type>::add(data)
{

}

#endif /* CircularList_h */
