#include<iostream>
#include "funcs.h"
using namespace std;
#include<vector>


int main(){
    vector<vector<int>>v={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    print2dMatrix(v);
    cout<<MatrixScore(v);
    cout<<"\n\n";
    print2dMatrix(v);

    
}