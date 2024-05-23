#include<iostream>
#include<cstring>
using namespace std;
int myAtoi(string s) {
            int ans=0;
            bool check=false;
            bool numberOccurence=false;
            for (int i=0;i<s.length();i++){
                if (s[i]==' ')  {continue;}
                //cout<<s[i];
                
                int f=(int)s[i]-(48);
                if (f>=0 && f<=9) {
                    //cout<<"numberfound"<<f<<"\n";

                    numberOccurence=true;
    //                cout<<ans<<"\t"<<f<<"\n";
                    ans=(ans*10)+f;
                }
                if (numberOccurence==false){
                    if (s[i]=='-'){
                        //cout<<"check";
                        check=true;} 
                    continue;
                }
                if (numberOccurence){
                    if (f<0 || f>9) break;
                }
            }   
            //cout<<"Check"<<check<<"\t"<<ans<<"\n";
            if (check)  {return -1*ans;}  
            return ans;
    }

int main(){
   //cout<<(int)'0';   
   cout<<myAtoi("-91283472332");
}