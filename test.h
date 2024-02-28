#include<string>
#include<cmath>
using namespace std;
int returnIntFromBinaryString(string s){
    int ans=0;
    int cnt=0;
    for (int i=s.length()-1;i>=0;i--){
        int flag=0;
        if (s[i]=='1'){flag=1;}
        ans+=(int)pow(2,cnt++)*flag;
    }   return ans;
}
string returnStringFromInt(int n){
    string ans="";
    if (n==0)   return "0";
    while (n!=0){
        if (n%2==1){ans+="1";}
        else {ans+="0";}
        n=n>>1;
    }   
    string new_ans="";
    for (int i=ans.length()-1;i>=0;i--){
        new_ans+=ans[i];
    }   return new_ans;
}

string addBinary(string s1,string s2){
    return returnStringFromInt(returnIntFromBinaryString(s1)+returnIntFromBinaryString(s2));
}


string addBinaryForReal(string s1,string s2){
    if (s1.length()>s2.length()) return addBinaryForReal(s2,s1);
    int cnt=0;
    int i=s1.length()-1;
    int j=s2.length()-1;
    while (i>=0 && j>=0){
        if s1[i]=="1" && s[j]=="1"   
    }
}