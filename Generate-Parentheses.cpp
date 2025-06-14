class Solution {
public:
    void findans(vector<string>&ans,string s,int l,int r){
        if(l==0 && r==0){
            ans.push_back(s);
             return;
             }

   if(l) {
    s.push_back('(');
   
    findans(ans,s,l-1,r);
    s.pop_back();
    }

       if(r>l) {
           s.push_back(')');
        findans(ans,s,l,r-1);
        }
        // s.pop_back();
 
       return ;

    }
    vector<string> generateParenthesis(int n) {
     vector<string>ans;
     string s;
     findans(ans,s,n,n);
     return ans;   
    }
};