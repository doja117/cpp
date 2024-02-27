#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,int>m;
    for(int i=0;i<10;i++){
        m[i]=(i*21083)%2173;
    }
    for (auto &x:m){
        cout<<x.first<<"\t"<<x.second<<"\n";
    }
}