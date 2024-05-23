#include<iostream>
#include<vector>
using namespace std;
vector<int>solve(vector<int>nums,int x){
    if (nums.size()==0) return nums;
    vector<int>ans;
    if (x==0){
        int i=0;    int j=i+1;
        int flag=0; int c_ans=0;
        while (j<nums.size()){
            if (nums[i]==0 || nums[j]==0)   {
                flag =j-i-1;
                if (c_ans>flag){
                    ans.clear();
                    for (int k=i;k<=j;k++){ans.push_back(k);}
                }
                i=j;  j++;
            }   else {
                j+=1;
                ans.clear();
                for (int k=i;k<=j;k++){ans.push_back(k);}
            }
        }   
    }   int i=0;    int j=i+1;  int ff=x;
        int flag=0; int c_ans=0;   bool check=true;
    while (j<ans.size()){
        if (ff==0){
            c_ans=j-i;
            if (c_ans>flag) flag=c_ans;
            ans.clear();
            for (int k=i;k<=j;k++){
                ans.push_back(k);
            }   c_ans=0;    check=true;
                i=j+1;
                j+=2;
        }
        if (i==nums.size())  return ans;
        if (nums[i]==0 && check)    {
            ff--;   check=false;
        }   if (nums[j]==0){
            ff--;
        }
    }       return ans;
}

void printVector(vector<int>v){
    for (auto x:v){
        cout<<x<<"\t";
    }   cout<<"\n";
}
int main(){
    int n;cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++){
        int f;  cin>>f; 
        v.push_back(f);
    }
    int x;cin>>x;
    printVector(solve(v,x));
}