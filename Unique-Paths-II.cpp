class Solution {
public:
// int uniquePath(int m, int n,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp) {
//         if(m<0 || n<0 || obstacleGrid[m][n]) return 0;
      
//         if(m==0 && n==0) return 1;
//         if(dp[m][n]!=-1) return dp[m][n];
//          int up=uniquePath(m-1,n,obstacleGrid,dp);
//          int left=uniquePath(m,n-1,obstacleGrid,dp);
         
//         return dp[m][n]=up+left;
//     }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]) return 0;
        // vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        // for(int i=0;i<n;i++){
        //     // if(obstacleGrid[0][i]==0)
            // dp[0][0]=1;
        // }
      vector<int>prev(n+1,0);
    //   prev[0]=1;
//  dp[0][0]=1;
        for(int i=0;i<m;i++){
            vector<int>curr(n+1,0);
        //    curr[0]=1;
            for(int j=0;j<n;j++){    
                if(i==0 & j==0){curr[0]=1;
                 continue;
            }
                if(obstacleGrid[i][j]==0){
                        int up=0;
                        if(i)up=prev[j];
                        int left=0;
                        if(j)left=curr[j-1];
                        // cout<<i<<" "<<j<<" "<<up<<"+"<<left<<endl;
                       curr[j]=up+left;
                }
            }
            prev=curr;
        }
        
        // for(auto i:dp){
        //     for(auto j:i) cout<<j<<" ";
        //     cout<<endl;
        // }
        return prev[n-1];
    
    }
};