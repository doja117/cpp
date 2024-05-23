typedef long long ll;
using namespace std;
const int mod=1e9+7;
#include<cstring>
#include<cmath>
#include<climits>
void testFunc(){
    pow(2,10);
}

ll fastPower(ll a,ll b){
    ll ans=1;
    ll flag=1;
    while (flag<=b){
        if (flag&b)    {ans*=a;}
        a*=a; flag=flag<<1;   
    }   return ans;
}

int returnModFastPower(ll a,ll b){
    int ans=1;
    ll flag=1;
    while (flag<=b){
        if (flag&b) {
            ans=((ans%mod)*(a%mod))%mod;
        }
        a=((a%mod)*(a%mod))%mod;    flag=flag<<1;
    }   return ans;
}

string solve(int A,int B, int C){
    if (A==B){return "=";}
    ll a=(ll)A;
    ll b=(ll)B;
    ll c=(ll)C;
    ll fac=fastPower(a,c);
    ll fbc=fastPower(b,c);
    if (fac>fbc){return ">";}
    if (fac==fbc){return "=";}
    return "<";
}