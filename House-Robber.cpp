class Solution {
public:
    // int findans(vector<int>&nums,int n,vector<int>&dp){
    //     if(n<0) return 0;
    //     if(n==0) nums[0];
    //     if(dp[n]!=-1) return dp[n];
    //     int take =nums[n]+findans(nums,n-2,dp);
    //     int takenext =findans(nums,n-1,dp);
         
    //     return dp[n]=max(take,takenext);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        dp[0]=nums[0];

        for(int i=1;i<n;i++){
        int take =nums[i];
        if(i-2>=0) take+=dp[i-2];
        int takeprev = dp[i-1];
         dp[i]=max(take,takeprev);
        }

        return dp[n-1];
    }
};