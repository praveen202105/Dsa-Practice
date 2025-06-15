class Solution {
public:
void findans(int n,vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&subans,int k){
      if(subans.size()>k) return;
        if(n==0){
          if(target==0 && subans.size()==k)  ans.push_back(subans);
            return;
        }
        if(target>=candidates[n-1]){
            subans.push_back(candidates[n-1]);
            target-=candidates[n-1];
            findans(n-1,candidates,target,ans,subans,k);
            subans.pop_back();
            target+=candidates[n-1];
        }

        findans(n-1,candidates,target,ans,subans,k);
    }
    vector<vector<int>> combinationSum3(int k, int target) {
     vector<int>nums={1,2,3,4,5,6,7,8,9};
     vector<vector<int>>ans;
      int n=nums.size();
      vector<int>subans;
       findans(n,nums,target,ans,subans,k);

     return ans;   
    }
};