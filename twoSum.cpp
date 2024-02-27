#include<iostream>
#include<vector>
using namespace std;
#include<unordered_map>
#include<set>
vector<int>twoSum(vector<int>&nums,int target){
    unordered_map<int,int> umap;
    vector<int>ans;
    for (int i=0;i<nums.size();i++){
        umap[nums[i]]=i;}
    for (int i=0;i<nums.size();i++){
        int x=target-nums[i];
        if (umap.find(x)!=umap.end()){
            if (i==umap[x]){
                continue;
            } else {
            ans.push_back(i);
            ans.push_back(umap[x]);
            return ans;}
        }
    }
    return ans;
    }

vector<vector<int>>threeSum(vector<int>&nums){
    unordered_map<int,int>m;
    for (int i=0;i<nums.size();i++){
        m[nums[i]]=i;
    }
    vector<vector<int>>ans;
    int i=0;
    while (i<nums.size()){
        for (int j=i+1;j<nums.size();i++){
            int target=(nums[i]+nums[j])*-1;
            if (umap.find(target)!=umap.end()){
                vector<int>h;
                h.push_back(nums[i]);
                h.push_back(nums[j]);
                h.push_back(umap[target]);
                ans.push_back(h);
            }
        } 
    i+=1;
    }
    return ans;
}