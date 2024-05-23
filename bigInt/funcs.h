#include<vector>
#include<iostream>
using namespace std;
typedef long long ll;
void PrintVector(vector<int>v){
    for (auto x:v){
        std::cout<<x;
    }   std::cout<<"\n";
}

vector<int>&ConvertLLToVector(ll n){
    vector<int>ans;
    while (n){
        auto it=ans.begin();
        
        n/=10;
    }   return ans;
}
