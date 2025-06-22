class Solution {
public:
// int uniquePath(int m, int n,vector<vector<int>>&dp) {
//         if(m==1 && n==1) return 1;
//         if(m<0 || n<0) return 0;
//         if(dp[m][n]!=-1) return dp[m][n];
//          int up=uniquePath(m-1,n,dp);
//          int left=uniquePath(m,n-1,dp);
         
//         return dp[m][n]=up+left;
//     }
    int uniquePaths(int m, int n) {
        if(m==1 || n==1) return 1;
        // vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        // for(int i=1;i<=n;i++)dp[1][i]=1;
       vector<int>prev(n+1,1);
       vector<int>curr(n+1,0);
       
        for(int i=2;i<=m;i++){
            for(int j=1;j<=n;j++){
                  int up=prev[j];
                  int left=curr[j-1];

               curr[j]=up+left;
            }
            prev=curr;
           if(i!=m) curr.resize(n+1,0);
        }
         
        return curr[n];
    }
};