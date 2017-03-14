//
//  BiDirectionalNode.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 2/27/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template<class Type>
classBiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type data;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalnode<Type> * previous, BiDirectionalNode<Type> * next);
    
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
    void setNextPointer(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionNode<Type> * previous);
};

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>()
{
    this->nextPointer = nullptr;
    this->previous= nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}


template<class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next) : Node<Type>(data, next)
{
    this->nextPointer = next;
    this->previous = previous;
}

template<class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointert()
{
    return this->nextPointer;
}

#endif /* BiDirectionalNode_h */
