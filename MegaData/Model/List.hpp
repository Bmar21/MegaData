//
//  List.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 2/21/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef List_h
#define List_h

#include "Node.hpp"
#include <assert.h>
#include <iostream>

class List
{
private:
    int size;
    Node<Type> * front;
    Node<Type> * end;
    
public:
    List<Type>() const;
    List<Type>(const List<Type> & source) copy const;
    ~List<Type>();
    List<Type>& operator = (const List<Type> & replacingList);
    
    int getSize() const;
    Node<Type> * getFrom() const:
    Node<Type> * getEnd() const;
    
    void addatIndex(int index, Type value);
    void addFront(Type value);
    void addEnd(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    bool contains(Type data);
    int getSize() const;
    Node<Type> * getFront() const;
};
    
template <class Type>
List<Type>
    
template <class Type>
void List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * newFirst = new Node<Type>;
        newFirst->setNodeData(value);
        newFirst->setNodePointer(front);
        //or
        //Node<Type> * newFirst = newFirst = new Node<Type>(value, front);
        this->Front = newFirst;
    }
    size++;
}
    
template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    size++;
}
    
template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current  = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; positoin < index; position++)
        {
            previous->setNodePointer(insertedNode);
            i

        }
        
        previous->setNodePointer(insertedNode)
        insertedNode->setNodePointer(current);
        
        size++;
    }
template <class Type>
    Type List<Type> :: remove(int index, Type data)
    {
        assert(index >= 0 && index <= size);
        Type removed:
        
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        Node<Type> * toBeRemoved = nullptr;
        
        if(index == 0)
        {
            toBeRemoved = front;
            this->front = front->getNodePointer();
        }
        else if  (index == size-1)
        {
            for(int spot = 0; spot < index; spott++)
            {
                previous = current;
                current = current->getNodePointer
            }
            
            toBeRemoved = current;
            previous->setNodePointer(nullptr);
            this->end = previous;
        }
        else
        {
            for(int spot = 0; spot < index; spot++)
            {
                previous = current;
                current = current->getNodePointer();
            }
            
            toBeRemoved = current;
            current = toBeRemoved->getNodePointer();
            previous->setNodePointer(current);
        }
        
        size--
    }
}

#endif /* List_h */
