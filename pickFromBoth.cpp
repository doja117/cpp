#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void printVector(vector<int>A){
    for(auto x:A){
        cout<<x<<"\t";
    }   cout<<"\n";
}
void flipVector(vector<int>&V){
    int i=0;
    int j=V.size()-1;
    while (i<j){
        int flag=V[i];
        V[i]=V[j];
        V[j]=flag;
        i++;    j-=1;
    }
}
int solve(vector<int> &A, int B) {
    vector<int>C(B,0);
    vector<int>D(B,0);
    int ans=0;
    for(int i=0;i<B;i++){
        ans+=A[i];
        C[i]=ans;
    }
    printVector(C);
    ans=0;
    int j=A.size()-1;
    int k=D.size()-1;
    while (k>=0){
        ans+=A[j--];
        D[k--]=ans;
    }
    flipVector(D);
    printVector(D);
    int i=0;
     j=0;
    for (int i=0;i<B;i++){
        for (int j=0;j<B;j++){
            if (i+j==B-2){
                ans=max(ans,C[i]+D[j]);
            }
        }
    }
    return ans;
}
    void printVector(vector<string>v){
        for (auto x:v){
            cout<<x<<"\t";
        }   cout<<"\nLineComplete";
    }

    bool isDigtEnd(string s){
        char c=s[s.size()-1];
        if ((c=='0')||(c=='1')||(c=='2')||(c=='3')||(c=='4')||(c=='5')||(c=='6')||(c=='7')||(c=='8')||(c=='9')) return true;
        return false;
    }    
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string>digits;
        vector<string>letters;
        for(auto x:logs){
            char c=x[x.size()-1];
            cout<<c<<"\t"<<(int)c<<"\n";
            if (97<=(int)c<=122) {letters.push_back(x);}
            else if (48<=(int)c<=57){digits.push_back(x);}
        }
        vector<string>ans;
        printVector(letters);
        printVector(digits);
        sort(letters.begin(),letters.end());
        for (auto x:letters)    ans.push_back(x);
        for (auto x:digits) ans.push_back(x);    
        return ans;
    }   

int main(){
    cout<<isDigtEnd("12312");
    cout<<isDigtEnd("213s");
}