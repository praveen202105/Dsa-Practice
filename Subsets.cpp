1class Solution {
2public:
3void findans(int i,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
4    if(i==nums.size()){
5        ans.push_back(temp);
6        return;
7    }
8
9    findans(i+1,nums,temp,ans);
10    temp.push_back(nums[i]);
11    findans(i+1,nums,temp,ans);
12    temp.pop_back();
13}
14    vector<vector<int>> subsets(vector<int>& nums) {
15            vector<vector<int>>ans;
16            vector<int>temp;
17            findans(0,nums,temp,ans);
18            return ans;
19    }
20};