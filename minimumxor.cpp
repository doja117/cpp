#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace  std;
int switchBitsRightToLeft(int n,int x){
    vector<int>v(32,0);
    int f=n;    int cnt=0;
    while (f){
        if (f&1)    v[cnt]++;
        cnt++;  f/=2;
    }
    int ans=0;
    for (int i=31;i>=0;i--){
        if (v[i] && x){
            ans+=pow(2,i);
            x-=1;
        }
    }   return ans;
}

int returnSetBits(int n){
    int ans=0;
    while (n){
        if (n&1)    ans++;
        n/=2;
    }   return ans;
}

int solve(int num1,int num2){
    int a=returnSetBits(num1);
    int b=returnSetBits(num2);
    if (a==b)   return num1;
    if (a>b)    {
        return switchBitsRightToLeft(num1,a-b);
    } else {
        vector<int>v(32,0);
        int f=num1;    int cnt=0;
        while (f){
            if (f&1)    v[cnt]++;
            cnt++;  f/=2;
        }
        int flag=b-a;
        for (int i=0;i<32;i++){
            if (v[i]==0 && flag){
                v[i]=1; flag-=1;
            }
        }   int ans=0;
        for (int i=0;i<32;i++){
            if (v[i])   ans+=pow(2,i);
        }   return ans;
    }
}
int main(){
    int a,b;   cin>>a>>b;
    cout<<returnSetBits(a)<<"\t"<<returnSetBits(b)<<"\n";

}