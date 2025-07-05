class Solution {
public:
    //  int findlcs(string s1,string s2,int n1,int n2,vector<vector<int>>&dp){
    //    if(n1==-1 || n2==-1) return 0;
    //    int equal=0,notequal=0;
    //    if(dp[n1][n2]!=-1) return dp[n1][n2];
    //    if(s1[n1]==s2[n2]){
    //     equal = 1+findlcs(s1,s2,n1-1,n2-1,dp);
    //    }else{
    //     notequal= max(findlcs(s1,s2,n1-1,n2,dp),findlcs(s1,s2,n1,n2-1,dp));
    //    } 

    //    return dp[n1][n2]=max(equal,notequal);

       


    //  }
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size(),n2=text2.size();
        int n=max(n1,n2);
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        vector<int>prev(n2+1,0),curr(n2+1,0);
        for(int i=1;i<=n1;i++){
          for(int j=1;j<=n2;j++){
            int equal=0,notequal=0;
             if(text1[i-1]==text2[j-1]){
                equal = 1+prev[j-1];
            }else{
               notequal=max(prev[j],curr[j-1]);
            } 

             curr[j]=max(equal,notequal);
         }
         prev=curr;   
        }
        return prev[n2];
    }
};