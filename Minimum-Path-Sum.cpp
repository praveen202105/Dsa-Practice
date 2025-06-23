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
        // vector<vector<int>>dp(m+1,vector<int>(n+1,0));
            // dp[0][0]=grid[0][0];
         vector<int>prev(n,0);
        for(int i=0;i<m;i++){
            vector<int>curr(n,0);
            for(int j=0;j<n;j++){    
                if(i==0 && j==0){
                    curr[0]=grid[0][0];
                     continue;
                }
                        int up=1e5;
                        if(i)up=grid[i][j]+prev[j];
                        int left=1e5;
                        if(j)left=grid[i][j]+curr[j-1];
                        // cout<<i<<" "<<j<<" "<<up<<"+"<<left<<endl;
                       curr[j]=min(up,left);
                


            }
            prev=curr;
        }
        
        return prev[n-1];
   
    
    }
};