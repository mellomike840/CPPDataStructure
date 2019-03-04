//
//  LinearTester.hpp
//  CPPDataStructure
//
//  Created by Rottlaender, Alex on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Stack.h"
#include "../Model/Linear/Queue.h"
#include "../Model/Linear/Array.hpp"

using namespace std;

class LinearTester
{
public:
    void testVsSTL();
    void testVsStack();
    void testVsQueue();
    void testVsDouble();
};


#endif /* LinearTester_hpp */
