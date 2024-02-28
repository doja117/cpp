#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<set>
using namespace std;
#include<vector>
#include<string>
#include<cmath>
typedef long long ll;
int getIthBit(int n,int i){
    int flag=n;
    flag=flag>>i;
    return flag & 1;

}
void clearIthBit(int &n,int i){
    int flag=1<<i;
    n=n^flag;   
}

bool PowerOfTwo(int n){
    if (n==2) return true;
    int flag=1;
    while (flag<=n){
        if (flag==n) return true;
        else {flag=flag<<1;}
    }   return false;
}

string returnBinaryString(int n){
    if (n==0){return "";}
    int f=1;
    string ans="";
    while (f<=n){
        if (f&n){
            ans.insert(0,"1");
        } else {
            ans.insert(0,"0");
        }
    f=f<<1;
    }

    return ans;

}

vector<int> decode(vector<int>encoded,int first){
    vector<int> ans;
        ans.push_back(first);
        for(int i=0;i<encoded.size();i++){
            int second=encoded[i]^ans[i];
            ans.push_back(second);
        }      
        return ans;
}



int returnSetBits(int num){
    int f=1;
    int ans=0;
    while (f<=num){
        if (f&num) ans+=1;
        f=f<<1;
    }   return ans;
}

vector<string> returnSubsequences(string s){
    int loopcntr=(int)pow(2,s.length());
    vector<string>ans;
    for (int i=0;i<loopcntr;i++){
        string currentSubsequence;
        int f=i;
        int stringCntr=0;
        while(f!=0){
            if (f & 1){
                currentSubsequence+=s[stringCntr];
                f=f>>1;
                stringCntr+=1;
            } else {
                f=f>>1;
                stringCntr+=1;
            }
        }
        ans.push_back(currentSubsequence);
    }
    return ans;
}

void flipVector(vector<int>&v){
    for (auto x:v){
        x=x^1;
    }   return;
}

int returnMSB(int num){
    int pos=0;
    while (num>0){
        pos++;
        num=num>>1;
    }   return pos;
}

int convertStringBinaryToInt(string s){
    int cnt=0;
    int ans=0;
    for (int i=s.size()-1;i>=0;i++){
        int flag=0;
        if (s[i]=='1')  flag=1;
        ans+=(int)pow(2,cnt)*flag;
    }   return ans;
}
int divide(int x,int y){
    bool check=false;
    if (x>0 && y>0){
        check=false;
    }
    if (x<0 && y<0){
        check=false;
        x=~x+1;
        y=~y+1;
    }
    
    else {
        check=true;
        if (x<0){
            x=~x+1;
        } else if (y<0){
            y=~y+1;
        }
    }   int ans=0;
       while (y<=x){
            y=y<<1;
            ans+=1;
    }   if (check==true){return -1*ans;}   
    return ans;
}
int rangeBitwiseAnd(int left,int right){
    //cout<<returnMSB(left)<<" "<<returnMSB(right)<<"\n";
    if (returnMSB(left)!=returnMSB(right)) return 0;
    auto x=1<<returnMSB(left)-1;
    //cout<<x<<"\n";
    auto flag=x>>1;
    int ans=x;
    int pos=0;
    while ((flag & left)==(flag & right)){
        pos+=1;
        ans+=(int)pow(2,returnMSB(left)-pos-1)*(flag &left);
        flag = flag >>1;
    }   return ans;

}

int returnBinaryValueFromVectorRow(vector<int>&v){
    int ans,cnt=0;
    for (auto x:v){
        ans+=(int)pow(2,cnt++)*x;
    }   return ans;
}


int returnFirstSetBit(int num){
    int f=1;
    int ans=0;
    while (f<=num){
        if (f & num) return ans;
        else {
            f=f<<1;
            ans+=1;
        }
    }
    return ans;
}
vector<int> SingleNumber(vector<int>&nums){
    int f=0;
    for (auto x:nums){
        f=f^x;
    }    
    int count=returnFirstSetBit(f);
    vector<int>v1;
    vector<int>v2;
    int flag=1<<count;
    for (auto x:nums){
        if (flag&x){
            v1.push_back(x);
        } else {
            v2.push_back(x);
        }
    }
    int c=0;
    vector<int>ans;
    for (auto x:v1){
        c=c^x;
    }
    ans.push_back(c);
    c=0;
    for (auto x:v2){
        c=c^x;
    }
    ans.push_back(c);
    return ans;
    
}

void printVectorStringsGenericFuckedMeUp(vector<string>s){
    for (auto x:s){
        cout<<x<<"\t";
    }
    cout<<"\n";
}
vector<int> sortByBits(vector<int>&arr){
    set<int>keys;
    vector<int>ans;
    unordered_map<int,vector<int>>m;
    for(auto x:arr){
        int f=returnSetBits(x);
        keys.insert(f);
        if (m.find(f)!=m.end()){
            m[f].push_back(x);
        } else {
            m[f]=vector<int>{x};
        }
    }
    for(auto &x:m){
        sort(x.second.begin(),x.second.end());
    }
    for (auto x:keys){
        for(int i=0;i<m[x].size();i++){
            ans.push_back(m[x][i]);
        }
    }
    

    return ans;
    
}
