//
//  Node.hpp
//  CPPDataStructure
//
//  Created by Rottlaender, Alex on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <assert.h>

//template means the following is not normal code.
template <class Type>
class Node
{
private:
    Type data;
public:
    Node();
    Node(Type data); //constructor
    Type getData(); //method
    void setData(Type data); //method
};

//Template defonitions
template <class Type>
Node<Type> :: Node(Type data)
{
    this ->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}


#endif /* Node_h */
