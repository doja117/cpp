#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include<climits>

 int returnLeftCnt(vector<int>& arr,int x){
        int ans=0;
        while (x>0){
            if (arr[x]>arr[x-1]){    ans+=1;
            x-=1;}  else {return ans;}
        }   return ans;
    }   
    int returnRightCnt(vector<int>&arr,int x){
       int ans=0;
       while (x<arr.size()-1){
        if (arr[x]>arr[x+1]){
            ans+=1;
            x+=1;
        }   else {return ans;}
       }    return ans;
    }
    int longestMountain(vector<int>& arr) {
        if (arr.size()<3)   return 0;
        vector<pair<int,int>>p;
        for (int i=1;i<arr.size()-1;i++){
            if (arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
                p.push_back(pair<int,int>(arr[i],i));
            }
        }
        int ans=INT_MIN;
        for (int i=0;i<p.size();i++){
            ans=max(ans,returnLeftCnt(arr,p[i].second)+returnRightCnt(arr,p[i].first)+1);
        }   if (ans==INT_MIN)   return 0;
        return ans;
    }
    void printVector(vector<int>v){
        for (auto x:v)  cout<<x<<"\t";
        cout<<"\n";
    }   
    void updateSetBit(vector<int>&v,int x){
        if (x<0)    v[31]+=1;
        x*=-1;
    }

int main(){
	printSetBits(4);
}