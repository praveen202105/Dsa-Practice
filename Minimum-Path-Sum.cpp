class Solution {
public:
    // int uniquePath(int m, int n,vector<vector<int>>&dp,vector<vector<int>>& grid) {
    //     if(m==0 && n==0) return grid[m][n];
    //     if(m<0 || n<0) return 1e5;
    //     if(dp[m][n]!=-1) return dp[m][n];
    //      int up=grid[m][n]+uniquePath(m-1,n,dp,grid);
    //      int left=grid[m][n]+uniquePath(m,n-1,dp,grid);
         
    //     return dp[m][n]=min(up,left);
    // }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
            dp[0][0]=grid[0][0];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){    
                if(i==0 & j==0) continue;

                        int up=1e5;
                        if(i)up=grid[i][j]+dp[i-1][j];
                        int left=1e5;
                        if(j)left=grid[i][j]+dp[i][j-1];
                        // cout<<i<<" "<<j<<" "<<up<<"+"<<left<<endl;
                       dp[i][j]=min(up,left);
                


            }
        }
        
        return dp[m-1][n-1];
   
    
    }
};