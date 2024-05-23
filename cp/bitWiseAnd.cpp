#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int returnMSB(ll num){
    int pos=0;
    while (num){
        pos+=1;
        num/=2;
    }   return pos-1;
}

ll solve(ll left,ll right){
    if (left==0 || right==0)    return 0;
    if (returnMSB(left)!=returnMSB(right))  return 0;
    auto pos=returnMSB(left);
    ll res=(ll)pow(2,pos);
    ll flag=1<<(--pos);
    while (pos!=0 && (flag & left)==(flag & right)){
        res+=(ll)pow(2,pos)*(flag & left);
        flag=1<<(--pos);
    }   return res;
}
int rangeBitWiseAnd(int left,int right){
    ll flag1=(ll)left;
    ll flag2=(ll)right;
    return (int)solve(flag1,flag2);
}
int main(){
    cout<<rangeBitWiseAnd(0,0);  
}