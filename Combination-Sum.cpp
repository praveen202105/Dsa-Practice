class Solution {
public:
    void findans(int n,vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&subans){
        if(n==0){
          if(target==0)  ans.push_back(subans);
            return;
        }
        if(target>=candidates[n-1]){
            subans.push_back(candidates[n-1]);
            target-=candidates[n-1];
            findans(n,candidates,target,ans,subans);
            subans.pop_back();
            target+=candidates[n-1];
        }

        findans(n-1,candidates,target,ans,subans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>subans;
       int n=candidates.size();
       findans(n,candidates,target,ans,subans);

       return ans;
    }
};