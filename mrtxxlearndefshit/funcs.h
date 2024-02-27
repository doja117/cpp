#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
void swapVectorColumnVize(vector<vector<int>>&v,int i){
    cout<<"Func called cvize\t"<<i<<"\n";
    if (v.size()==0) return;
    int c_size=v.size();
    int r_size=v[0].size();
    
        for (int j=0;j<r_size;j++){
            if (v[i][j]==0) v[i][j]=1;
            else {v[i][j]=0;}
        }
       return;
}
void print2dMatrix(vector<vector<int>>v){
    for (auto x:v){
        for (auto y:x){
            cout<<y<<"\t";
        }   cout<<"\n";
    }
}
void flipMatrix(vector<int>&v){for(auto& x:v){x=x^1;}return;}
int returnMatrixScore(vector<int>&v){
    int ans=0;
    int cnt=0;
    for(int i=v.size()-1;i>=0;i--){
        ans+=(int)pow(2,cnt)*v[i];
        cnt+=1;
    }   return ans;
}

int MatrixScore(vector<vector<int>>&grid){
    if (!grid.size()) return 1;
    for (auto& x:grid){
        if (x[0]==0){flipMatrix(x);}   
    }
    int zero=0;
    int one=0;
    for (int i=1;i<grid.size();i++){
        for (int j=0;j<grid[0].size();j++){
            if (grid[i][j]==0) {zero+=1;}
            else {one+=1;}
             cout<<one<<"\t"<<zero<<"index\t"<<i<<"\t"<<j<<"\n";
        }
        cout<<one<<"\t"<<zero<<"index"<<"\n";
        if (zero<one){
            swapVectorColumnVize(grid,i);
        }   zero=0;
            one=0;
    }
     int ans=0;
        for (auto &x:grid){
           
            ans+=returnMatrixScore(x);
            
        } return ans;
}