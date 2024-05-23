#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
bool isPowerOf2(int n){
    int cnt=0;
    while (n){
        if (cnt>1)  return false;
        if (n & 1)  cnt+=1;
    }   return (cnt==1);
}

vector<int>returnDivisors(int n){
    vector<int>v(n+1,-1);
    v[0]=0;
    v[1]=1;
    v[2]=2;
    vector<int>ans;
    for (int i=1;i<=(int)sqrt(n);i++){
        if (v[i]!=-1)   continue;
        else {
            if (n%i==0){
                v[i]=1;
                v[n/i]=1;
                if (i*i!=n){
                ans.push_back(i);
                ans.push_back(n/i);
                } else {
                    ans.push_back(i);
                }
            }
        }
    }   return ans;
}

vector<int>sovle(vector<int>v){
    vector<int>ans;
    for (auto x:v){
        vector<int>flag=returnDivisors(x);
    }
}