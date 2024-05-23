#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){
    if (p1.first==p2.first){
        if (p1.second<p2.second)    return true;
        else return false;
    }   return true;
}
int solve(vector<pair<int,int>>v){
    if (v.size()==0)    return 0;
    sort(v.begin(),v.end(),cmp);
    vector<pair<int,int>>helper;
    helper.push_back(v[0]);
    for (int i=1;i<v.size();i++){
        if (v[i].second<=helper[helper.size()-1].first) helper.push_back(v[i]);
    }   return helper.size();
}
int main(){
    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        vector<pair<int,int>>v;
        for (int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        cout<<solve(v)<<"\n";
    }
}
