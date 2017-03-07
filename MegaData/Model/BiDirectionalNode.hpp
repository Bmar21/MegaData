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
}

template<class Type>
BiDirectionalNode<Type> :: BiDirectionalNOde() : Node()
{
    
}

template<class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    
}

#endif /* BiDirectionalNode_h */
