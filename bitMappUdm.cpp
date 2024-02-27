#include<iostream>
using namespace std;
#include<vector>

int returnUniqueNumber(vector<int>v){
    int flag=0;
    for (auto x:v){
        flag=flag^x;
    }   return flag;
}
string returnBinary(int n){
    
    string ans="";    
    if (n<0){
        cout<<n<<"\t";
        cout<<(~n+1)<<"\t";
        n=~n+1;
        cout<<n<<"\n";
        returnBinary(n);
    } 
    int f=n;
    //string ans="";
    while (f!=0){
        if (f&1){
            ans+="1";
            f=f>>1;
        } else {
            ans+="0";
            f=f>>1;
        }
    }   return ans;
}
int main(){
   string s=returnBinary(-2147483648);
   cout<<s;    
}