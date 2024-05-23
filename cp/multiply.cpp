#include<iostream>
#include<cstring>
typedef long long ll;
std::string multiplyStrings(const std::string& num1, const std::string& num2) {
    ll len1 = num1.size();
    ll len2 = num2.size();
    std::string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; --i) {
        ll carry = 0;
        for (int j = len2 - 1; j >= 0; --j) {
            ll temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = temp / 10;
            result[i + j + 1] = temp % 10 + '0';
        }
        result[i] += carry;
    }

    size_t startpos = result.find_first_not_of('0');
    if (std::string::npos != startpos) {
        return result.substr(startpos);
    }
    return "0";
}

using namespace std;

string convertStringFromInt(ll x){
    string ans="";
    while (x){
        ans.insert(0,to_string(x%10));
        x/=10;
    }   
    return ans;
}

int sum(string s){
    if (s.size()==1)    return (int)s[0]-48;
    int ans=0;
    for (auto x:s){
        ans+=(int)(x)-48;
    }
    if (ans<10) return ans;
    return sum(convertStringFromInt((ll)ans));
}

int solve(ll a,ll b){
    string res="1";
    while (b){
        if (b&1){
            res=multiplyStrings(convertStringFromInt((ll)a),res);
        }   a*=a;
            b/=2;   
    }   return sum(res);
}
int main(){
    int t;cin>>t;
    while (t--){
    ll a,b;
    cin>>a>>b;
    cout<<solve(a,b)<<"\n";
    }
}