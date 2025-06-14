class Solution {
  public:
    bool check(int n,vector<int>& arr, int k,vector<vector<int>>&dp) {
        if(k == 0) return true;
        if(n == 0) return false;
        if(dp[n][k]!=-1) return dp[n][k];
    
         bool take = false;
        if(k >= arr[n - 1])take=check(n-1,arr,k-arr[n-1],dp);
        bool nottake=check(n-1,arr,k,dp);
        
        // Code here
        return dp[n][k]=take || nottake ;
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        if(n==1) return arr[n-1]==k;
           vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
      //  check(n,arr,k,dp);
        return  check(n,arr,k,dp);;
    }
};