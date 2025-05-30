class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp1,mp2;
        vector<int>ans;
        for(auto i:p)mp1[i]++;
        int i=0,j=0;
        
        while(j<s.size()){
            mp2[s[j]]++;
            if((j-i)+1>p.size()){
                mp2[s[i]]--;
                if(mp2[s[i]]==0)mp2.erase(s[i]);
                i++;
            }
            if(mp1==mp2){
             ans.push_back(i);
            }
            j++;

        }

        return ans;
    }
};