class Solution {
public:
int uniquePath(int m, int n,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp) {
        if(m<0 || n<0 || obstacleGrid[m][n]) return 0;
      
        if(m==0 && n==0) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
         int up=uniquePath(m-1,n,obstacleGrid,dp);
         int left=uniquePath(m,n-1,obstacleGrid,dp);
         
        return dp[m][n]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size()-1,n=obstacleGrid[0].size()-1;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return uniquePath(m,n,obstacleGrid,dp);
    
    }
};