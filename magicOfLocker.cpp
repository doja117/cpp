#include<iostream>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
ll returnModFastPower(ll a,ll b){
    ll ans=1;
    ll flag=1;
    while (flag<=b){
        if (flag&b) {
            ans=((ans%mod)*(a%mod))%mod;
        }
        a=((a%mod)*(a%mod))%mod;    flag=flag<<1;
    }   return ans;
}
ll solve(ll x){
    if (x==1)   return 1;
    if (x==2)   return 1;
    if (x==3)   return 2;   
    if (x==4)   return 4;

    ll c1=((int)x/3);   
    ll c2=x%3;
    if (c2==2)  {return ((returnModFastPower(3,c1)%mod)*(2))%mod;}
    if (c2==0)  {return returnModFastPower(3,c1);}
    if (c2==1)  {return  ((returnModFastPower(3,c1-1)%mod)*(4))%mod;}
    return 0;
}

int main(){
    int t;cin>>t;
    while (t--){
        ll x;    std::cin>>x;
        std::cout<<solve(x)<<"\n";
    }
}