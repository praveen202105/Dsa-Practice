1class Solution {
2public:
3void findans(int i,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
4    if(i==nums.size()){
5        ans.push_back(temp);
6        return;
7    }
8
9    temp.push_back(nums[i]);
10    findans(i+1,nums,temp,ans);
11    temp.pop_back();
12
13    int j=i;
14    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) {
15        j++;
16    }
17    findans(j+1,nums,temp,ans);
18}
19
20    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
21        sort(nums.begin(),nums.end());
22         vector<vector<int>>ans;
23            vector<int>temp;
24            findans(0,nums,temp,ans);
25            return ans;
26    }
27};