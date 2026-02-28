1class Solution {
2public:
3    void findans(string s,vector<string>&ans,int l,int r){
4        if(l==0 && r==0){
5            ans.push_back(s);
6            return;
7        }
8
9        if(l)findans(s+'(',ans,l-1,r);
10        if(r>l)   findans(s+')',ans,l,r-1);
11        return;
12    }
13    vector<string> generateParenthesis(int n) {
14        vector<string>ans;
15        string s;
16        findans(s,ans,n,n);
17        return ans;
18    }
19};