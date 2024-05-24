#include "lib.h"
#include <iostream>
#include <vector>
using namespace std;

SymmetricDifference::SymmetricDifference(int nbVec,int intVal,vector<vector<int>>myNewVec){
    myVec=myNewVec;
    nbVec=0;
    intVal=0;

};
void SymmetricDifference::CreateVector(){
    cout<<"How many vectors do you want to insert?"<<endl;
    cin>>nbVec;
    cout<<"Now insert your values into your vector"<<endl;
    for(int i=0;i<nbVec;i++){
        vector<int> v1;
        while(intVal!=" "){
            cin>>intVal;
            myVec.pushback(intVal);
        }
        myVec.pushback(v1);
    }
    for(int i=0;i<myVec.size();i++){
        cout<<myVec[i]<<endl;
}
};

/*class SymmetricDifference{
    SymmetricDifference()
};*/
