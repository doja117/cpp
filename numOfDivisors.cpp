#include<iostream>
#include<vector>
using namespace std;
bool isPowerOfTwo(int x){
    int f=1;
    while (f<=x){
        if (f==x)   return true;
        f=f<<1;
    }   return false;
}
int solve(int n){
    vector<int>v(n+1,0);
    v[0]=-1;
    v[1]=1;
    for (int i=2;i<=n;i++){
        if (v[i]==-1){continue;}
        else {
            if (n%i!=0){
                int flag=i;
                while (flag<=n){
                    v[flag]=-1;
                    flag+=i;
                }
            }   else {
                v[i]=1;
            }
        }
    }
    int ans=0;
    for (auto x:v){
        if (x==1)   ans+=1;
    }   return ans;
}

int main(){
    int n;cin>>n;
    vector<int>v(n,0);
    for (int i=0;i<n;i++){
        int f;cin>>f;
        v[i]=f;
    }
    vector<int>ans(n,0);
    for (int i=0;i<n;i++){
        int f=v[i];
        int fans=0;
        for (int i=1;i<=f;i++){
            if (isPowerOfTwo(solve(i))){
                fans+=1;
            }   
        }   ans[i]=fans;
    }
    for (auto x:ans){cout<<x<<"\t";}
}