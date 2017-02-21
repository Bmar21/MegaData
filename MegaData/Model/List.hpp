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
public:
    List<Type>() const;
    
};


#endif /* List_h */
