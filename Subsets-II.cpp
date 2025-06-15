class Solution {
public:
    void findans(vector<int>&nums,int i,vector<int>&subans,vector<vector<int>>&ans){
    if(i>nums.size()) return;
    if(i==nums.size()){
        ans.push_back(subans);
        return;
    }

    subans.push_back(nums[i]);
    findans(nums,i+1,subans,ans);
    subans.pop_back();
    while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        findans(nums,i+1,subans,ans);
    

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
          vector<vector<int>>ans;
     vector<int>subans;
     findans(nums,0,subans,ans);  
     return ans; 
    }
};