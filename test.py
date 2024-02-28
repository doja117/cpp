import math


def returnIntFromString(s):
    ans=0
    cnt=0
    for x in range(len(s)-1,-1,-1):
        flag=0
        if (s[x]=='1'):
            flag=1
        ans+=math.pow(2,cnt)*flag
        cnt+=1
    return int(ans)

def returnStringFromInt(n):
    ans=""
    while n!=0:
        if (n%2==0):
            ans+="0"
        else :
            ans+="1"
        n=n>>1
    return ans[::-1]


if "110111101100010011000101110110100000011101000101011001000000000000000000000000000000000000000000000"=="110111101100010011000101110110100000011101000101011001000011011000001100011110011010010011000000000":
    print("t")
else:
    print("f")