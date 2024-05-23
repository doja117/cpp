#include <iostream>
#include<string>
#include "funcs.h"
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
    if (n-3*flag==1){
        flag-=1;
    }   return modPowr(3,flag)*(n-3*flag)%mod;
}
int main() {
	// your code goes here
    cout<<returnModFastPower(2,60);
}