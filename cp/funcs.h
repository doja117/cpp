#include <vector>
#include <iostream>
using namespace std;
typedef long long  ll;
void returnReversedVector(vector<int>&v){
    int start=0;
    int end=v.size()-1;
    while (start<=end){
        int flag=v[start];
        v[start]=v[end];
        v[end]=flag;
        start+=1;
        end-=1;
    }   return;
}
vector<int>ReturnSumOfTwoLLs(ll a,ll b){
    ll count=0;
    vector<int>ans;
    while (a && b){
        int flag=a%10+b%10+count;
        //cout<<flag<<"\t";
        count=flag/10;
        flag=flag%10;
        ans.push_back(flag);
        a/=10;
        b/=10;
        flag=0;
    }
    while (a){
        int flag=a%10+count;
        count=flag/10;
        flag=flag%10;
        ans.push_back(flag);
        a/=10;
        flag=0;
    }
    while (b){
        int flag=b%10+count;
        count=flag/10;
        flag=flag%10;
        ans.push_back(flag);
        b/=10;
        flag=0;
    }   
    while (count){
        ans.push_back(count);
        returnReversedVector(ans);
        return ans;
    }
    
    returnReversedVector(ans);
    return ans;
}
vector<int>MultiplyBySingleNumber(vector<int>v,int x){
    int carry=0;
    vector<int>new_vec;
    for (auto x:v){

    }
}
vector<int>MultiplyTwoNumbers(ll a, ll b){
    vector<int>v;
    while (a){
        v.push_back(a%10);
        a/=10;
    }   returnReversedVector(a);

}

void PrintVector(vector<int>v){
    for (auto x:v){
        cout<<x;
    }   cout<<"\n";
}

