//
//  Controller.cpp
//  CPPDataStructure
//
//  Created by Rottlaender, Alex on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Data Structures App" << endl;
    testLinear();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}

void Controller :: testFiles()
{
     vector<Music> tunez = FileController :: musicDataToVector("/Users/arot3696/C++ workspace/CPPDataStructure/CPPDataStructure/Resources/music.csv");
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}

