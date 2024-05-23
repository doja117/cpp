#include<iostream>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll returnPow(int x,int y){
    ll res=1;
    while (y){
        if (y&1)    res*=x,res%=mod;
        
    }
}
ll solve(int n){

}

int main(){
    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        cout<<solve(n)<<"   ";
    }   return 0;
}