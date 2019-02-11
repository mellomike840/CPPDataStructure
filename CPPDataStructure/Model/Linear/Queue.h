//
//  Queue.h
//  CPPDataStructure
//
//  Created by Rottlaender, Alex on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "linkedList.hpp"

#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    //Queue methods
    void enqueue(type data);
    Type dequeue();
    Type peek()
    void clear();
    
    //Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
}

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
    //Empty since it is handled by the present class constructor.
}

template <class Type>
Queue<Type> :: ~Queue()
{
    for(Linear)
}


#endif /* Queue_h */
