int longestConsecutive(vector<int>&nums){
    unordered_set<int>s;
    for (auto x:nums){
        s.insert(x);
    }
   int largestLen=1;
   for (auto x:s){
    int p=x-1;
    if (s.find(p)==s.end()){
        int next=x+1;
        int cnt=1;
        while (s.find(next)!=s.end()){
            next++;
            cnt++;
        }
        if (cnt>largestLen) largestLen=cnt;
    }
    return largestLen;
   }
}