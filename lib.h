#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

class SymmetricDifference{
    vector<vector<int>>myVec;
    public:
    SymmetricDifference(int nbVec,int intVal,vector<vector<int>>myNewVec);
    void CreateVector();
    private:
    int nbVec,intVal;
};

#endif
