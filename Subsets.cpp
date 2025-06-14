class Solution {
public:
    void findans(vector<int>&nums,int i,vector<int>&subans,vector<vector<int>>&ans){
    if(i==nums.size()){
        ans.push_back(subans);
        return;
    }

    subans.push_back(nums[i]);
    findans(nums,i+1,subans,ans);
    subans.pop_back();
        findans(nums,i+1,subans,ans);
    

    }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>ans;
     vector<int>subans;
     findans(nums,0,subans,ans);  
     return ans; 
    }
};