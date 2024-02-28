typedef long long ll;
#include<iostream>
#include<cmath>
const int mod=1e9+7;


double myPow(double x,ll n){
    if (x==1)   return 1;
    if (n<0)    return myPow(1/x,-1*n);
    double res=1;
    while (n!=0){
        if (n&1)    res*=x;
        n=n>>1;
        x*=x;
    }   return res;
}
int powr(int a,int b){
    int res=1;
    while (b){
        if (b & 1)  res*=a,res%=mod;
        a*=a;a%=mod;
        b/=2;
    }   return res; 
}

int modPowr(int a,int b){
    int res=1;
    while (b){
        if (b&1)    res*=a,res%=mod;
        a*=a;   a%=mod;
        b/=2;
    }   return res;
}

int solveLockerSpoj(int n){
    if (n<4)    return n;
    int flag=((int)(n/3)-1);
    return modPowr(3,flag)*((n-3*flag)%mod)
}