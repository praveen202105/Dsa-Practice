class Solution {
public:
    int uniquePath(int m, int n,vector<vector<int>>&dp,vector<vector<int>>& grid) {
        if(m==0 && n==0) return grid[m][n];
        if(m<0 || n<0) return 1e5;
        if(dp[m][n]!=-1) return dp[m][n];
         int up=grid[m][n]+uniquePath(m-1,n,dp,grid);
         int left=grid[m][n]+uniquePath(m,n-1,dp,grid);
         
        return dp[m][n]=min(up,left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    return uniquePath(m-1,n-1,dp,grid);
    
    }
};