class Solution {
public:
    int findFallingSum(int r,int c,vector<vector<int>>&matrix,vector<vector<int>>&dp){
        if(c<0 || r>=matrix.size() || c>=matrix[0].size()) return 1e5;
        if(r==matrix.size()-1) return matrix[r][c];

        if(dp[r][c]!=1e5) return dp[r][c];
        int takeanddown=matrix[r][c]+findFallingSum(r+1,c,matrix,dp);
        int takeandDiagonalLeft=matrix[r][c]+findFallingSum(r+1,c-1,matrix,dp);
        int takeandDiagonalRight=matrix[r][c]+findFallingSum(r+1,c+1,matrix,dp);

        return dp[r][c]=min(takeanddown,min(takeandDiagonalLeft,takeandDiagonalRight));
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int ans=1e5;
        vector<vector<int>>dp(n,vector<int>(m,1e5));
        for(int i=0;i<matrix[0].size();i++)
        ans=min(ans,findFallingSum(0,i,matrix,dp));

        return ans;
    }
};