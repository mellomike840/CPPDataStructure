//
//  Controller.hpp
//  CPPDataStructure
//
//  Created by Rottlaender, Alex on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.h"
#include "../Controller/FileController.cpp"
#include "FileController.hpp"

using namespace std;


//a class declaration in a collection of prototypes.
class Controller
{
private:
    void usingNodes();
    void testFiles();
protected:
public:
    void start();
};

#endif /* Controller_hpp */
