class Solution {
  public:
    int findans(vector<int>& height,int n,vector<int>&dp){
        if(n==0) return 0;
        if(n<0) return 1e5;
        if(dp[n]!=-1) return dp[n];
        int takeone=abs(height[n]-height[n-1])+findans(height,n-1,dp);
        int taketwo=INT_MAX;
        if(n>=2)
        taketwo=abs(height[n]-height[n-2])+findans(height,n-2,dp);
        
        return dp[n]=min(takeone,taketwo);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        vector<int>dp(n,-1);
        return findans(height,n-1,dp);
    }
};