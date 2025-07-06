class Solution {
public:
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
    int longestPalindromeSubseq(string s) {
        string s2=s;
        reverse(s2.begin(),s2.end());
        return longestCommonSubsequence(s,s2);
    }
};
// bbbab
// babbb