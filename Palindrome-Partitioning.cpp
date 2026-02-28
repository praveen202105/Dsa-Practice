1class Solution {
2public:
3    bool ispalindrom(string s){
4        int l=0,e=s.size()-1;
5        while(l<=e){
6            if(s[l]!=s[e]) return false;
7            l++;
8            e--;
9        }
10
11        return true;
12    }
13    void findans(int i,string s,vector<string>&sans,vector<vector<string>>&ans){
14        if(i==s.size()){
15           ans.push_back(sans);
16           return;
17        }
18         
19         for(int j=i;j<s.size();j++){
20            string newstr=s.substr(i,j-i+1);
21              if(ispalindrom(newstr)){
22                sans.push_back(newstr);
23                findans(j+1,s,sans,ans);
24                sans.pop_back();
25              }
26         }
27
28    }
29    vector<vector<string>> partition(string s) {
30        vector<vector<string>>ans;
31        vector<string>temp;
32       
33        findans(0,s,temp,ans);
34        return ans;
35    }
36};
37
38// aaba
39// a a b a
40// aa b a
41// a aba 
42