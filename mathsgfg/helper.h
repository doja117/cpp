#include <cmath>
int returnDigits(int n){
    if (n==0)   return 0;
    if (n<=9)   return 1;
    return 1+returnDigits(n/10);
    
}

bool numberPalindrome(int n){
    int check=0;
    int flag=n;
    while (flag){
        check=check*10+(flag%10);
        flag/=10;
    }
    if (check==n)   return true;
    return false;
}

bool isPrime(int n){
    if (n==1)   return false;
    for (int i=2;i<=(int)sqrt(n);i++){
        if (!(n%i))    return false;
    }   return true;
}

int exactly3Divisors(int N){
    int arr[N+1];
    for (int i=0;i<=N;i++)  arr[i]=-1;
    arr[0]=0;   arr[1]=0;
    for (int i=2;i<=N;i++){
        if (arr[i]==-1){
            if (isPrime(i)) {
                arr[i]=1;
                int flag=i+i;
                while (flag<=N){
                    arr[flag]=0;
                    flag+=i;
                }
            } else {
                arr[i]=0;
                int flag=i;
                while (flag<=N){arr[flag]=0;flag+=i;}
            }
        } else {continue;}
    }
    int ans=0;
    for (int i=4;i<=N;i++){
        int flag=(int)sqrt(i);
        if (flag*flag==i && arr[flag]==1)   ans+=1;
    }   return ans;
}