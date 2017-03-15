//
//  Queue.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/7/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "DoublyLinkedList"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
public:
    Queue();
    ~Queue();
    void add(Type data);
    Type remove(int index);
    void enqueue(Type data);
    Type dequeue();
    Type peek();
};

template <class Type>
Queue<Type> :: Queue() : DoublyLinkedList<Type>()
{
    
}

/*
same destructor as list, array, stack... since it is a Linear data structure.
*/
template <class Type>
Queue<Type> :: ~Queue()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this-> getFront();
    }
}

template<class Type>
void Queue<Type> :: add(Type value)
{
    enqueue(value);
}

/*
    Add to Queue:
    Create Node
    If First - adjust front
    else add to end
    move end 
    adjust size
 */

template <class Type>
void Queue<Type> :: enqueue(Type insertedValue)
{
    BiDirectionalNode<Type> * added = new BiDirectionalNode<Type>(insertedValue);
    
    if(this->getSize() == 0 || this->getFront() == nullptr || this->getEnd() == nullptr)
    {
        this->setFront(added);
    }
    else
    {
        this->getEnd()->setNextPointer(added);
    }
    this->getEnd(added);
    this->setSize(this->getSize() + 1);
}

/*
 Remove from Queue
 Check vaild index
 */

template<class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0 && this->getSize() > 0);
    return dequeue();
}

/*
 Check size
 If size = 1
 adjust front/end to nullptr
 size
    move from to next 
*/

Type removedValue = this->getFront()->getNodeData();
BiDirectional<Type>




#endif /* Queue_h */
