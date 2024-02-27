#include<iostream>
using namespace std;
#include<cmath>
int returnMSB(int num){
    int pos=0;
    while (num>0){
        num=num>>1;
        pos+=1;
    }   return pos;
}

int returnNumberOnMSB(int num,int pos){
    return (int)pow(2,pos)*num;
}

int rangeBitwiseAnd(int left,int right){
    if (left==right) return left;
    if (returnMSB(left)!=returnMSB(right))  return 0;
    if (returnMSB(left)==0) return 0;
    auto x=1<<(returnMSB(left)-1);
    auto flag=x>>1;
    auto ans=x;
    int pos=returnMSB(left)-2;
    while ((flag & left)== (flag & right)){
        ans+=returnNumberOnMSB(flag&left,pos);
        pos-=1;
        flag=flag<<1;
    }   return ans;
}

int main(){
    cout<<returnMSB(5);
}